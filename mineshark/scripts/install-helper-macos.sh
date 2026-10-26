#!/bin/bash
set -euo pipefail
[[ $EUID == 0 ]] || { echo 'Run this installer with sudo.' >&2; exit 1; }
root=$(cd "$(dirname "$0")/.." && pwd)
/usr/bin/python3 --version
install -d -o root -g wheel -m 755 /Library/PrivilegedHelperTools
install -o root -g wheel -m 755 "$root/platform/macos-helper.py" /Library/PrivilegedHelperTools/org.wireshark.mineshark
cat > /Library/LaunchDaemons/org.wireshark.mineshark.expire.plist <<'PLIST'
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
<key>Label</key><string>org.wireshark.mineshark.expire</string>
<key>ProgramArguments</key><array><string>/usr/bin/python3</string><string>-I</string><string>/Library/PrivilegedHelperTools/org.wireshark.mineshark</string><string>expire</string></array>
<key>StartInterval</key><integer>60</integer><key>RunAtLoad</key><true/>
</dict></plist>
PLIST
chmod 644 /Library/LaunchDaemons/org.wireshark.mineshark.expire.plist
launchctl bootout system/org.wireshark.mineshark.expire 2>/dev/null || true
launchctl bootstrap system /Library/LaunchDaemons/org.wireshark.mineshark.expire.plist
/sbin/pfctl -E
echo 'Installed. PF enabled; existing system rules were not replaced.'
