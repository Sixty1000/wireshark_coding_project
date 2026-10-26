# Run in an Administrator PowerShell window.
$ErrorActionPreference = 'Stop'
$identity = [Security.Principal.WindowsIdentity]::GetCurrent()
if (!(New-Object Security.Principal.WindowsPrincipal($identity)).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)) { throw 'Run this installer in Administrator Windows PowerShell.' }
$destination = "$env:ProgramFiles\Mineshark"
New-Item -ItemType Directory -Force $destination | Out-Null
# Prevent ordinary users from replacing code that is elevated by the UI/task.
icacls $destination /inheritance:r /grant:r '*S-1-5-18:(OI)(CI)F' '*S-1-5-32-544:(OI)(CI)F' '*S-1-5-32-545:(OI)(CI)RX' | Out-Null
if ($LASTEXITCODE -ne 0) { throw 'Could not secure helper directory.' }
Copy-Item "$PSScriptRoot\..\platform\windows-helper.ps1" "$destination\helper.ps1" -Force
$action = New-ScheduledTaskAction -Execute "$env:SystemRoot\System32\WindowsPowerShell\v1.0\powershell.exe" -Argument "-NoProfile -NonInteractive -ExecutionPolicy Bypass -File `"$destination\helper.ps1`" -Command expire -Elevated"
$trigger = New-ScheduledTaskTrigger -Once -At (Get-Date).AddMinutes(1) -RepetitionInterval (New-TimeSpan -Minutes 1)
$settings = New-ScheduledTaskSettingsSet -StartWhenAvailable -AllowStartIfOnBatteries -DontStopIfGoingOnBatteries
Register-ScheduledTask -Settings $settings -TaskName MinesharkExpiry -Action $action -Trigger $trigger -User SYSTEM -RunLevel Highest -Force | Out-Null
Write-Host 'Installed helper and one-minute expiry task. Run Wireshark normally.'
