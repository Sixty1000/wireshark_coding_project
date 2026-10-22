# Mineshark

**Win the board. Banish the connection.**

A native C++/Qt modification of Wireshark, based on upstream **v4.4.10**, commit
`f44ead52fe6599e4b2bb6e10e492795e640096de`. The complete Wireshark source and its
GPL-2.0-or-later license are included. This is a course-project fork, not an
official Wireshark feature. Start here rather than the upstream README.

## What is implemented

- Right-click an IPv4 or IPv6 packet → **Challenge Connection to Minesweeper…**
- The selected packet's numeric network endpoints become Source Player and
  Destination Player; changing packets later cannot change the challenge target.
- An 8×8 board with 10 mines, flags, a safe first click and neighboring cells,
  zero-cell expansion, a timer, loss/retry, and victory detection.
- Revealing all 54 safe cells triggers containment. A loss or a closed game
  makes no firewall changes. A system authorization prompt can appear after a win.
- **CONNECTION VANQUISHED** appears only after the firewall helper acknowledges
  a successful nftables transaction. Failed/canceled authorization is shown as
  **BLOCK NOT CONFIRMED**, with a retry action and a reminder to check Active
  Blocks. A lost helper response cannot prove that a transaction was not applied.
- **Restore Connection** in the victory dialog.
- **Security → Minesweeper Blocks…** reads the live kernel state, including
  blocks created in a previous Wireshark session. Select a pair to unblock it,
  or use **UNBLOCK ALL**. Refresh updates the remaining expiration times.
- A standalone native simulation for previewing the UI without firewall access.

Automatic severity classification and extra difficulty levels are intentionally
deferred. This version blocks the **entire IP pair**, across protocols and ports;
it is not a TCP five-tuple blocker or a destination-wide ban.

## Linux / Ubuntu build

Test target: Ubuntu 24.04 or a similar Linux desktop with Qt 6.2+, CMake 3.22+,
nftables 1.0+, a polkit authentication agent, and a C++17 compiler. The Linux
helper is intentionally nftables-only: it fails visibly if nft is unavailable,
and does not silently choose a different firewall backend.

From the root of this source tree:

```bash
./mineshark/scripts/install-deps-ubuntu.sh
./mineshark/scripts/build.sh
sudo ./mineshark/scripts/install-helper.sh "$PWD/build/run/mineshark-helper"
```

The build script uses two compiler jobs by default to fit typical course VMs.
Use `MINESHARK_JOBS=4 ./mineshark/scripts/build.sh` on a VM with enough RAM.
For another build directory, set `MINESHARK_BUILD_DIR` to an absolute path.

Give only the capture executable capture privileges:

```bash
sudo setcap cap_net_raw,cap_net_admin=eip "$PWD/build/run/dumpcap"
./build/run/wireshark
```

Run the GUI as your ordinary desktop user. If the distro already provides a
group-based dumpcap policy, use that policy instead. The helper installer does
not modify Wireshark, grant it root access, or install a setuid executable.
Rebuilding dumpcap may remove its file capabilities; reapply them if necessary.

On a minimal desktop, install/start the distro's polkit authentication agent if
pkexec reports that no authentication agent is available.

## Fast UI-only preview

This builds just the feature, helper and tests, without compiling Wireshark's
thousands of dissectors:

```bash
cmake -S mineshark -B build-mineshark -G Ninja
cmake --build build-mineshark --parallel 2
QT_QPA_PLATFORM=offscreen ctest --test-dir build-mineshark --output-on-failure
./build-mineshark/mineshark-demo
```

The preview is labeled **SIMULATION** throughout. Its blocks are in memory and
never alter network traffic. The Wireshark-integrated feature uses the live
helper; no environment variable silently switches it into simulation.

## Two-VM demonstration

1. Put both VMs on the same reachable virtual network. For the example, the
   Wireshark VM is `10.0.2.15`, and its peer is `10.0.2.4`. Substitute their real
   IPs if different. Independent default NAT networks may not allow peer access;
   a shared host-only or internal network is useful for a lab.
2. At the Wireshark VM's local console, start `ping -O 10.0.2.4`. Linux ping's
   `-O` prints outstanding replies, making the moment of containment visible.
3. Open the modified Wireshark as a normal user, capture the lab interface,
   and apply `icmp`. Right-click an Echo Request from `10.0.2.15` to `10.0.2.4`.
4. Choose **Challenge Connection to Minesweeper…**, then win the board.
5. Authorize the helper if prompted. Once the helper succeeds, the UI displays
   **CONNECTION VANQUISHED** and ping replies stop arriving.
6. Click **Restore Connection**. Replies resume. Close the game, then demonstrate
   the independent **Security → Minesweeper Blocks…** recovery view.

The firewall acts on the machine running the helper. The selected traffic must
originate, terminate, or be routed through that VM. Capturing a mirrored packet
between two unrelated hosts cannot make this VM block traffic on those hosts.
An offline capture still identifies an IP pair, but cannot establish that the
pair currently routes through this machine.

For an offline UI walkthrough, generate a small ICMP capture:

```bash
python3 mineshark/demo/make_capture.py /tmp/mineshark-demo.pcap
./build/run/wireshark -r /tmp/mineshark-demo.pcap
```

## Firewall and privilege design

The GUI invokes `/usr/bin/pkexec /usr/libexec/mineshark-helper` with one of four
fixed verbs: `status`, `block IP IP`, `unblock IP IP`, or `unblock-all`.
The installed polkit action requires administrator authentication for an active
local session; normal short-lived polkit authorization caching is allowed.
The helper has no shell execution, arbitrary executable path, arbitrary nft
script, or command-line ruleset argument. It validates addresses independently
of the GUI and serializes its operations with a lock in `/run`.

Each canonical IP pair owns one `inet mineshark_<24 hex digits>` table. It
contains an expiring set of both endpoint orders and input, output and forward
filter chains. Each chain drops matching packets at priority -10. This also
blocks already-established normal traffic, rather than only new TCP sessions.
Hardware/software flowtable offload and unusual custom network bypass paths are
outside this course-project implementation.

The table is created/replaced in one nft transaction. Unblocking deletes only
the relevant Mineshark table. Unblock All deletes only tables in Mineshark's
reserved namespace; it never flushes the system ruleset. Other firewall rules
continue to apply, so removing a Mineshark block cannot override another
firewall's deny rule. nftables can coexist with iptables-nft, but this project
does not configure iptables-legacy.

Set elements expire after **one hour**, including when Wireshark has closed.
Empty scaffolding tables can remain after expiration; Unblock All removes them.
Rules are not persisted across a reboot. Closing a challenge intentionally
does not remove a successfully installed block: recovery remains available in
the Security menu or from the console:

```bash
sudo /usr/libexec/mineshark-helper status
sudo /usr/libexec/mineshark-helper unblock 10.0.2.15 10.0.2.4
sudo /usr/libexec/mineshark-helper unblock-all
```

If a lab block affects your SSH pair, use the VM's local console to restore it.
Minesweeper is an interaction gate, not an authorization or anti-tamper boundary:
an already-authorized administrator can call the helper directly.

## Tests

The focused QtTest suite exercises the board over thousands of safe openings,
flag/bounds behavior, terminal states, address rejection and canonicalization,
bidirectional rules, simulated containment/recovery, and UI victory/loss wiring.

For actual kernel enforcement, run the namespace test on your Linux VM:

```bash
sudo ./mineshark/tests/network_namespace.sh "$PWD/build/run/mineshark-helper"
```

It creates two temporary network namespaces and a veth pair, verifies ping in
both directions, blocks/restores IPv4 and IPv6, checks duplicate/reversed-pair
handling and status, and verifies an unrelated table survives recovery. A trap
deletes the test namespaces. It needs root plus CAP_NET_ADMIN and namespace
support; a restricted container cannot run it.

See `mineshark/VALIDATION.md` for checks performed on this deliverable.

## Source map

| Path | Responsibility |
| --- | --- |
| `ui/qt/mineshark/board.{h,cpp}` | Independent Minesweeper engine |
| `ui/qt/mineshark/mineshark_dialog.{h,cpp}` | Challenge, firewall client and recovery UI |
| `ui/qt/wireshark_main_window.cpp` | Security menu, selected-packet endpoint snapshot |
| `ui/qt/packet_list.cpp` | Right-clicked frame selection and context action |
| `mineshark/firewall_plan.h` | Canonical validation and constrained nft rule generation |
| `mineshark/helper.cpp` | Privileged adapter and live kernel-state listing |
| `mineshark/polkit/` | System authorization policy |
| `mineshark/tests/` | Unit/UI tests and isolated kernel integration test |

Architecture references: [Wireshark capture privilege separation](https://www.wireshark.org/docs/wsdg_html_chunked/ChWorksCapturePackets.html),
[nftables reference](https://www.netfilter.org/projects/nftables/manpage.html),
[nftables element timeouts](https://wiki.nftables.org/wiki-nftables/index.php/Element_timeouts),
[pkexec reference](https://www.freedesktop.org/software/polkit/docs/latest/pkexec.1.html).
