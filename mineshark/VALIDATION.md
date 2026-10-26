# Validation record

Validated on Ubuntu 24.04, GCC 13.3, Qt 6.4.2, with a Linux 6.18 kernel.

| Check | Result |
| --- | --- |
| Full modified Wireshark GUI, dumpcap, helper, demo and tests compile/link | Passed |
| Final UI messaging change compiles and links into full Wireshark executable | Passed |
| `wireshark --version` | Passed; reports 4.4.10 with Qt 6.4.2 |
| Standalone feature build | Passed |
| QtTest suite | 11 passed, 0 failed (including suite setup/cleanup) |
| First-click safety across 100 seeds × 64 cells | Passed |
| Flag limits, bounds, loss/win terminal states | Passed |
| Canonical/reversed endpoints, IPv4/IPv6 plans, injection/address rejection | Passed |
| Simulated containment, idempotence, restore and Unblock All | Passed |
| UI victory triggers block; loss/close make no firewall call | Passed |
| Recovery manager loads and removes an existing simulated block | Passed |
| Rendered challenge, victory and recovery dialogs inspected | Passed |
| Full Wireshark opens 16 generated ICMP packets, selects packet 1 and opens native live-mode Mineshark with correct numeric endpoints and 64 cells | Passed using an offscreen Qt startup probe |
| Helper rejects malformed address input | Passed |
| Shell script syntax and Python demo generator | Passed |
| `git diff --check` | Passed |
| Real nftables / ping namespace integration | **Not run successfully here: environment denies Netlink and namespace access** |
| Desktop polkit authentication on the course VM | **Requires the user's Linux desktop VM** |

No real firewall block was installed in the build environment. Simulation
success is not a claim that kernel enforcement has been tested. Run
`mineshark/tests/network_namespace.sh` as documented in `MINESHARK.md` on the
course VM before the live demonstration.

The full build used a Release configuration and disabled optional Lua, GnuTLS,
Kerberos, SMI and netlink libraries; these are unrelated to Mineshark's helper,
which invokes the external nftables binary. The normal build script uses the
optional libraries found on the user's VM.

## Native macOS and Windows backends (2026-10-26)

- Full macOS Wireshark target: built successfully with the native helper dispatch.
- Standalone Qt test suite: passed with offscreen rendering.
- `python3 -m unittest discover -s mineshark/tests -p test_macos_helper.py`: 3 passed.
  These mock PF; they exercise validation, installation of paired rules,
  state-removal requests, status, reversed-pair recovery, expiry, and rejection
  of an unattached anchor.
- macOS installer shell syntax and `git diff --check`: passed.
- No administrator helper installation or live firewall mutation was performed.
- Windows build/PowerShell/UAC/task execution and real network enforcement on
  both platforms are not verified. Follow the traffic acceptance procedure in
  MINESHARK.md before relying on these backends.

## Local packet-viewing design (supersedes firewall UI)

- Application no longer creates a FirewallClient or exposes firewall actions.
- Capture workspace is hidden initially; capture-count polling presents the
  request independently of display filters. New/opened/closed captures reset it.
- Win-only signal reveals the original packet workspace; loss does not unlock.
- Added a local-mode regression test covering loss, retry, win and single emission.
- Full macOS Wireshark build and standalone Qt suite passed.
- Windows compilation and interactive live-capture walkthrough remain unverified.

## Live capture packaging fix

- Added dumpcap as a dependency of the Wireshark GUI target when both exist.
- Built the missing macOS bundle capture executable.
- `dumpcap -D` enumerated Wi-Fi en0 and other local interfaces.
- A bounded live check on en0 captured one packet successfully outside the
  execution sandbox (three-second limit, 64-byte snapshot). No permission
  changes or firewall operations were needed.
