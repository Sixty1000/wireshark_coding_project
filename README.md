# Mineshark: win to capture packets

Mineshark is a Wireshark fork with a local Minesweeper challenge. It does not
block network traffic or call firewall helpers.

## Feature title and description

**Win to Capture: Minesweeper Challenge with a Playing Timer** delays live
packet recording until the player wins Minesweeper. Previously, capture ran
behind the challenge and winning revealed both earlier and current packets.
Now, the capture process starts only after victory, so packets sent while
playing are not recorded by that capture. A timer above the board displays
elapsed playing time in minutes and seconds.

### How to trigger and use it

1. Launch Wireshark and double-click a capture interface, select an interface
   and click Start, or start through Capture → Options. Command-line startup
   with `-k` also opens the challenge before recording.
2. Starting a live capture opens Minesweeper before packet recording starts.
   No packets from the game are buffered for later viewing.
3. Reveal all 54 safe cells on the 8×8 board (10 mines). Left-click reveals;
   right-click flags. The first click is safe. The timer at the top starts on
   the first reveal, stops on a win or loss, and resets with New board.
4. Losing leaves capture stopped. Click New board to retry. Switching tabs
   does not start recording.
5. Winning automatically returns to Wireshark and starts recording new packets.
   Each new live capture requires a new win.
6. Saved capture files retain a viewing challenge: winning shows their existing
   packets. Display-filter changes do not require another game.

This is a playful challenge, not encryption or an access-control boundary.
Saved files, exports, and other Wireshark tools are not protected. No
administrator authorization is needed for the game.

## Justification

Mineshark helps you improve your Minesweeper skills in a high-stakes
environment: packet recording depends on winning. Every second spent solving
the board is a second of network traffic that your capture will miss, giving
you a reason to recognize patterns, make decisions, and clear the board
quickly and accurately.

The timer lets you track your solving speed and compare attempts. Losing
means trying again before recording can begin, making each board an
opportunity to practice Minesweeper under pressure.

## Modified C/C++ files

The following files implement the delayed live capture and timer update.
No C source files were changed for this update.

| File | Change and reason |
| --- | --- |
| `ui/qt/main.cpp` | Routes command-line capture startup (`-k`) through the main window's capture-start slot so it follows the same challenge as the graphical controls. |
| `ui/qt/wireshark_main_window.h` | Declares the capture authorization flag and `captureChallengeRequested` signal used to coordinate the game with capture startup. |
| `ui/qt/wireshark_main_window.cpp` | Opens the embedded game when a live capture is requested, tracks the pending capture, and starts it after victory. Preserves the win through live-file opening and rotation, resets the challenge for subsequent requests, and updates status messages while retaining the saved-file viewing challenge. |
| `ui/qt/wireshark_main_window_slots.cpp` | Checks challenge authorization before launching capture. Keeps capture stopped until victory and handles command-line capture comments and requested statistics when recording starts. |
| `ui/qt/mineshark/mineshark_dialog.cpp` | Moves the existing timer into the heading above the board, labels it explicitly, and adds an accessible name. Updates challenge messages to describe unlocking capture rather than merely revealing hidden packets. |
| `mineshark/tests/test_mineshark.cpp` | Adds timer coverage for its initial state, first reveal, elapsed-time updates, loss, reset, and victory. Updates the expected loss message to match the capture-lock wording. |

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
