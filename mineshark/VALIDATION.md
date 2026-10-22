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
