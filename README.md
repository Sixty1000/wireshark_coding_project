# Mineshark: win to capture packets

Mineshark adds a local Minesweeper challenge to Wireshark 3.2.3. Live packet
recording starts only after victory; packets sent while playing are not saved
by that capture. Network traffic itself continues normally.

## How to play

1. Double-click an interface or use Capture → Start / Options. Command-line
   startup with `-k` also opens the challenge before recording.
2. Reveal all 54 safe cells on the 8×8 board with 10 mines. Left-click to reveal
   and right-click to flag. The first reveal is safe.
3. The timer above the board starts on the first reveal and stops on a win or
   loss. New board resets it and lets you retry.
4. Winning returns to the Wireshark tab and starts recording new packets.
   Losing or switching tabs does not start capture. Each new capture requires
   a new win.
5. Opening a saved capture presents a challenge to view its existing packets.
   Display-filter changes do not require another game.

## Justification

Mineshark helps improve your Minesweeper skills in a high-stakes environment:
recording depends on winning. Every second spent solving the board is a second
of traffic the capture will miss. The timer helps you compare attempts and
practice solving quickly and accurately under pressure.

## Modified Files List

These existing Wireshark 3.2.3 `.cpp` and `.h` files required changes to integrate Mineshark.

| File | Necessary change and reason |
| --- | --- |
| `ui/qt/main_window.cpp` | Embeds the Minesweeper challenge, connects victory to capture startup, and manages challenge resets so each new capture requires a win while an active capture stays unlocked. |
| `ui/qt/main_window.h` | Declares the challenge request signal and temporary capture authorization flag so the game and capture-start handler can coordinate and permit recording only after victory. |
| `ui/qt/main_window_slots.cpp` | Defers launching the capture process until the challenge is won, preventing packets from being recorded during play. Defers requested command-line statistics until capture actually starts. |
| `ui/qt/main.cpp` | Routes command-line capture startup (`-k`) through the same challenge so it cannot bypass the win requirement. |
