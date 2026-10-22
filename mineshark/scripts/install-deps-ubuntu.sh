#!/usr/bin/env bash
# SPDX-License-Identifier: GPL-2.0-or-later
set -euo pipefail
sudo apt-get update
sudo apt-get install -y build-essential cmake ninja-build pkg-config flex bison \
    qt6-base-dev qt6-tools-dev qt6-tools-dev-tools qt6-5compat-dev \
    qt6-multimedia-dev libqt6svg6-dev libglib2.0-dev libgcrypt20-dev \
    libc-ares-dev libpcap-dev libpcre2-dev libspeexdsp-dev libnghttp2-dev \
    libssh-dev liblz4-dev libsnappy-dev libspandsp-dev libbrotli-dev \
    libxml2-dev libzstd-dev zlib1g-dev nftables polkitd pkexec \
    iproute2 iputils-ping python3 libcap-dev libcap2-bin
