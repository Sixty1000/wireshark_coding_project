# Mineshark: win to view packets

Mineshark is a Wireshark fork with a local Minesweeper challenge. It does not
block network traffic or call firewall helpers.

## How it works

1. Launch Wireshark. The normal welcome screen shows capture interfaces and
   their activity graphs. Double-click an interface to start capturing, use
   Capture → Options, or File → Open to load a capture.
2. Only the packet-detail workspace is gated after selecting a capture. When
   its first packet arrives, a challenge request appears in the Wireshark tab. Click it to open Minesweeper in the second tab.
3. Reveal all 54 safe cells on the 8×8 board (10 mines). Left-click reveals;
   right-click flags. The first click is safe.
4. Losing keeps packets hidden. Click New board to retry. Switching tabs does
   not unlock anything.
5. Winning automatically returns to Wireshark and reveals the packet list,
   protocol details, and bytes. Later packets in this capture remain visible.
6. Closing/opening a capture resets the challenge. Display-filter changes do
   not require another game. Saved captures also trigger the challenge.

Capture continues during the game. This is a playful viewing gate, not encryption
or an access-control boundary: saved files, exports, and other Wireshark tools
are not protected. No administrator authorization is needed for the game.

## macOS

From the repository directory:

```bash
bash tools/macos-setup-brew.sh
cmake -S . -B build-native -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_PREFIX_PATH=/opt/homebrew -DBUILD_wireshark=ON -DBUILD_doc=OFF
cmake --build build-native --target wireshark dumpcap --parallel 4
./build-native/run/Wireshark.app/Contents/MacOS/Wireshark
```

On Intel Macs use `/usr/local` instead of `/opt/homebrew`. For live capture use
Wireshark's ChmodBPF capture-permission setup. Do not run the GUI as root.
No Mineshark firewall helper is required.

For a quick walkthrough with saved packets:

```bash
python3 mineshark/demo/make_capture.py /tmp/mineshark-demo.pcap
./build-native/run/Wireshark.app/Contents/MacOS/Wireshark -r /tmp/mineshark-demo.pcap
```

## Windows

Install Visual Studio 2022 with Desktop development with C++, CMake, Python 3,
Git, Qt 6 with the MSVC x64 kit, and the prerequisites in
`doc/wsdg_src/wsdg_quick_setup.adoc` (including winflexbison). Install Npcap for
live capture. Open **x64 Native Tools Command Prompt for VS 2022** and adapt the
repository and Qt paths to your installation:

```bat
cd /d C:\Development\wireshark
set WIRESHARK_BASE_DIR=C:\Development
set WIRESHARK_QT6_PREFIX_PATH=C:\Qt\6.8.3\msvc2022_64
cmake -S . -B build-windows -G "Visual Studio 17 2022" -A x64 -DBUILD_doc=OFF
cmake --build build-windows --config RelWithDebInfo --target wireshark dumpcap --parallel 4
build-windows\run\RelWithDebInfo\Wireshark.exe
```

No administrator PowerShell, firewall rules, or scheduled task is required for
Mineshark. Capture permissions depend on your Npcap installation.

## Linux

```bash
./mineshark/scripts/install-deps-ubuntu.sh
./mineshark/scripts/build.sh
./build/run/wireshark
```

Use your distribution's normal capture-permission setup for dumpcap. Do not
install the legacy Mineshark firewall helper.

## Missing live interfaces or activity graphs

If the welcome screen says “Couldn’t run dumpcap in child process”, build the
capture program as well as the GUI. The current GUI target depends on dumpcap,
so rebuilding now includes it automatically. On macOS:

```bash
cmake --build build-native --target wireshark dumpcap --parallel 4
./build-native/run/Wireshark.app/Contents/MacOS/dumpcap -D
./build-native/run/Wireshark.app/Contents/MacOS/Wireshark
```

Quit the previous Wireshark process before relaunching. The interface list
should include Wi-Fi (`en0` on many Macs) and its activity graph. Double-click
that interface to start live capture. A `.pcap` file is not needed.
If dumpcap reports permission denied rather than missing, use Wireshark's
ChmodBPF setup on macOS or the normal Npcap permissions on Windows.

## Game-only preview and tests

```bash
cmake -S mineshark -B build-mineshark
cmake --build build-mineshark --parallel 4
QT_QPA_PLATFORM=offscreen ctest --test-dir build-mineshark --output-on-failure
./build-mineshark/mineshark-demo
```

The standalone preview has no capture; winning displays “Packets unlocked”.
Windows multi-configuration builds place the executable under the configuration
folder and require `--config RelWithDebInfo` and `ctest -C RelWithDebInfo`.

## If you installed an earlier firewall version

The new UI never invokes those helpers, but previously installed rules and
background jobs are not removed automatically. Follow the recovery and uninstall
instructions in [the historical firewall guide](mineshark/LEGACY_FIREWALL.md).
Do not install those helpers for this design.
