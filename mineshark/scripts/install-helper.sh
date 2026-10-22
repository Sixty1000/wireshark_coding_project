#!/usr/bin/env bash
# SPDX-License-Identifier: GPL-2.0-or-later
set -euo pipefail
if [[ $EUID -ne 0 || $# -ne 1 ]]; then
    echo "Usage: sudo $0 /absolute/path/to/mineshark-helper" >&2
    exit 1
fi
command -v nft >/dev/null || { echo 'Install nftables first.' >&2; exit 1; }
command -v pkexec >/dev/null || { echo 'Install polkit (pkexec) first.' >&2; exit 1; }
script_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
[[ -f "$1" && -x "$1" ]] || { echo 'Helper binary not found.' >&2; exit 1; }
# Never setuid Wireshark or the helper. pkexec handles explicit authorization.
install -d -m 0755 /usr/libexec /usr/share/polkit-1/actions
install -o root -g root -m 0755 -- "$1" /usr/libexec/mineshark-helper
install -o root -g root -m 0644 -- "$script_dir/../polkit/org.wireshark.mineshark.policy" /usr/share/polkit-1/actions/org.wireshark.mineshark.policy
echo 'Mineshark helper installed. Run Wireshark as your normal desktop user.'
