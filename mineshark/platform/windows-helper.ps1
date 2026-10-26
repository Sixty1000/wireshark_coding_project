param(
    [ValidateSet('block','unblock','unblock-all','status','expire')][string]$Command,
    [string]$A, [string]$B,
    [switch]$Elevated
)
$ErrorActionPreference = 'Stop'
try {
    $pairCommand = $Command -in @('block','unblock')
    if ($pairCommand) {
        $aIP = [System.Net.IPAddress]::Parse($A)
        $bIP = [System.Net.IPAddress]::Parse($B)
        if ($aIP.AddressFamily -ne $bIP.AddressFamily -or $aIP.Equals($bIP) -or $aIP.IsIPv6Multicast -or $bIP.IsIPv6Multicast -or $A -in @('0.0.0.0','::','255.255.255.255') -or $B -in @('0.0.0.0','::','255.255.255.255')) { throw 'Invalid IP pair.' }
        foreach ($ip in @($aIP,$bIP)) {
            if ($ip.AddressFamily -eq [System.Net.Sockets.AddressFamily]::InterNetwork -and $ip.GetAddressBytes()[0] -ge 224) { throw 'Select a unicast address.' }
            if ($ip.IsIPv4MappedToIPv6) { throw 'IPv4-mapped IPv6 is not supported.' }
        }
        $A = $aIP.ToString(); $B = $bIP.ToString()
        if ($A -notmatch '^[0-9a-fA-F:.]+$' -or $B -notmatch '^[0-9a-fA-F:.]+$') { throw 'Invalid IP address.' }
    }
    if (!$Elevated -and $Command -ne 'status') {
        $arguments = @('-NoProfile','-NonInteractive','-ExecutionPolicy','Bypass','-File', ('"' + $PSCommandPath + '"'), '-Command', $Command, '-Elevated')
        if ($pairCommand) { $arguments += @('-A',$A,'-B',$B) }
        $child = Start-Process -FilePath "$PSHOME\powershell.exe" -ArgumentList $arguments -Verb RunAs -Wait -PassThru
        if ($child.ExitCode -ne 0) { throw 'Firewall helper failed. Check administrator authorization, local addresses, and firewall policy.' }
        '{"ok":true}'
        exit 0
    }
    $mutex = $null
    if ($Command -ne 'status') {
        $mutex = New-Object System.Threading.Mutex($false, 'Global\MinesharkFirewall')
        if (!$mutex.WaitOne(30000)) { throw 'Firewall operation busy.' }
    }
    try {
        $rules = @(Get-NetFirewallRule -Group 'Mineshark' -ErrorAction SilentlyContinue | Where-Object { $_.Name -match '^Mineshark-[0-9a-f]{64}-(In|Out)$' })
        $now = [DateTimeOffset]::UtcNow.ToUnixTimeSeconds()
        if ($Command -eq 'status') {
            $blocks = @($rules | Where-Object { $_.Name.EndsWith('-In') } | ForEach-Object {
                $meta = $_.Description | ConvertFrom-Json
                @{source=$meta.source; destination=$meta.destination; expiresSeconds=[Math]::Max(0,$meta.expires-$now)}
            })
            @{blocks=$blocks} | ConvertTo-Json -Compress -Depth 4
        } else {
            foreach ($rule in $rules) {
                $meta = $rule.Description | ConvertFrom-Json
                if ($Command -eq 'unblock-all' -or $meta.expires -le $now) { $rule | Remove-NetFirewallRule }
            }
            if ($pairCommand) {
                $pair = @($A,$B) | Sort-Object
                $hash = [System.Security.Cryptography.SHA256]::Create()
                $id = 'Mineshark-' + ([BitConverter]::ToString($hash.ComputeHash([Text.Encoding]::UTF8.GetBytes(($pair -join '|'))))).Replace('-','').ToLower()
                Get-NetFirewallRule -Name "$id-In","$id-Out" -ErrorAction SilentlyContinue | Remove-NetFirewallRule
                if ($Command -eq 'block') {
                    $local = @(Get-NetIPAddress | ForEach-Object { $_.IPAddress })
                    if ($A -in $local) { $localIP=$A; $remoteIP=$B }
                    elseif ($B -in $local) { $localIP=$B; $remoteIP=$A }
                    else { throw 'One endpoint must belong to this Windows computer.' }
                    if (@(Get-NetFirewallProfile | Where-Object { !$_.Enabled }).Count) { throw 'Enable Windows Firewall for all profiles first.' }
                    $description = @{source=$pair[0]; destination=$pair[1]; expires=$now+3600} | ConvertTo-Json -Compress
                    try {
                        foreach ($direction in @('Inbound','Outbound')) {
                            $suffix = if ($direction -eq 'Inbound') { 'In' } else { 'Out' }
                            New-NetFirewallRule -Name "$id-$suffix" -DisplayName "Mineshark $localIP ↔ $remoteIP" -Group Mineshark -Description $description -Direction $direction -Action Block -LocalAddress $localIP -RemoteAddress $remoteIP -Protocol Any -Profile Any | Out-Null
                        }
                        $active = @(Get-NetFirewallRule -PolicyStore ActiveStore -Name "$id-In","$id-Out" | Where-Object { $_.Enabled -eq 'True' -and $_.Action -eq 'Block' })
                        if ($active.Count -ne 2) { throw 'Firewall policy did not activate both rules.' }
                    } catch {
                        Get-NetFirewallRule -Name "$id-In","$id-Out" -ErrorAction SilentlyContinue | Remove-NetFirewallRule
                        throw
                    }
                }
            }
            '{"ok":true}'
        }
    } finally { if ($mutex) { $mutex.ReleaseMutex(); $mutex.Dispose() } }
} catch { [Console]::Error.WriteLine($_.Exception.Message); exit 1 }
