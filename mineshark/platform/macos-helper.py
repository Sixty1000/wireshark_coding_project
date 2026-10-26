#!/usr/bin/python3
"""Root-owned PF adapter; launchd calls expire every minute."""
import fcntl
import ipaddress
import json
import os
from pathlib import Path
import subprocess
import sys
import time

ROOT = Path('/var/db/mineshark')
ANCHOR = 'com.apple/mineshark'

def pf(*args, data=None):
    p = subprocess.run(['/sbin/pfctl', *args], input=data, text=True, capture_output=True, timeout=20)
    if p.returncode:
        raise RuntimeError(p.stderr.strip())
    return p.stdout

def pair(a, b):
    if any('%' in x for x in (a, b)):
        raise ValueError('Scoped IPv6 addresses are not supported.')
    ips = [ipaddress.ip_address(x) for x in (a, b)]
    if ips[0].version != ips[1].version or ips[0] == ips[1] or any(x.is_multicast or x.is_unspecified or str(x) == "255.255.255.255" for x in ips):
        raise ValueError('Select two distinct unicast addresses of the same family.')
    return sorted(map(str, ips))

def apply(blocks):
    rules = []
    for item in blocks:
        a, b = pair(item['source'], item['destination'])
        family = 'inet6' if ':' in a else 'inet'
        rules.extend([f'block drop quick {family} from {a} to {b}', f'block drop quick {family} from {b} to {a}'])
    pf('-a', ANCHOR, '-f', '-', data='\n'.join(rules) + '\n')
    active = pf('-a', ANCHOR, '-sr')
    if len([x for x in active.splitlines() if x.startswith('block drop')]) != len(rules):
        raise RuntimeError('PF rule verification failed.')

def main():
    args = sys.argv[1:]
    if not args or args[0] not in ('block', 'unblock', 'unblock-all', 'status', 'expire'):
        raise ValueError('Unknown command.')
    command = args[0]
    if len(args) != (3 if command in ('block', 'unblock') else 1):
        raise ValueError('Incorrect argument count.')
    selected = pair(*args[1:]) if len(args) == 3 else None
    if os.geteuid() != 0:
        raise RuntimeError('Administrator authorization required.')
    ROOT.mkdir(mode=0o700, exist_ok=True)
    with (ROOT / 'lock').open('a') as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        path = ROOT / 'blocks.json'
        old = json.loads(path.read_text()) if path.exists() else []
        now = int(time.time())
        blocks = [x for x in old if x['expires'] > now]
        if selected:
            blocks = [x for x in blocks if [x['source'], x['destination']] != selected]
        if command == 'unblock-all':
            blocks = []
        if command == 'block':
            # Fail closed rather than claiming an unattached PF anchor is active.
            if 'anchor "com.apple/*"' not in pf('-sr'):
                raise RuntimeError('The active PF rules must evaluate the standard com.apple/* anchor. Restore the macOS PF configuration first.')
            if 'Status: Enabled' not in pf('-si'):
                raise RuntimeError('PF is disabled. Enable it during helper setup before playing.')
            blocks.append(dict(source=selected[0], destination=selected[1], expires=now + 3600))
        if blocks != old:
            # Save desired state first so launchd can repair an interrupted update.
            temp = ROOT / 'blocks.new'
            temp.write_text(json.dumps(blocks))
            temp.replace(path)
        try:
            apply(blocks)
        except Exception:
            # Restore the previous unexpired plan if installing the new plan fails.
            previous = [x for x in old if x['expires'] > now]
            path.write_text(json.dumps(previous))
            apply(previous)
            raise
        if command == 'block':
            for a, b in (selected, selected[::-1]):
                pf('-k', a, '-k', b)
        print(json.dumps({'blocks': [dict(source=x['source'], destination=x['destination'], expiresSeconds=x['expires']-now) for x in blocks]} if command == 'status' else {'ok': True}))

if __name__ == '__main__':
    try:
        main()
    except Exception as error:
        print(str(error), file=sys.stderr)
        sys.exit(1)
