#!/usr/bin/env bash
# SPDX-License-Identifier: GPL-2.0-or-later
set -euo pipefail
root=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/../.." && pwd)
build=${MINESHARK_BUILD_DIR:-"$root/build"}
cmake -S "$root" -B "$build" -G Ninja \
    -DCMAKE_BUILD_TYPE=RelWithDebInfo -DUSE_qt6=ON \
    -DBUILD_logray=OFF -DBUILD_wireshark=ON \
    -DBUILD_doc=OFF -DBUILD_androiddump=OFF "$@"
cmake --build "$build" --target wireshark dumpcap mineshark-helper mineshark-demo mineshark-tests --parallel "${MINESHARK_JOBS:-2}"
QT_QPA_PLATFORM=offscreen "$build/run/mineshark-tests"
echo "Launch: $build/run/wireshark"
echo "Install helper: sudo $root/mineshark/scripts/install-helper.sh $build/run/mineshark-helper"
