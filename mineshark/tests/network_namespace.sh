#!/usr/bin/env bash
# SPDX-License-Identifier: GPL-2.0-or-later
# Real-kernel integration test. All rules and interfaces live in temporary
# network namespaces, never in the host's network namespace.
set -euo pipefail
if [[ $EUID -ne 0 || $# -ne 1 ]]; then
    echo "Usage: sudo $0 /absolute/path/to/mineshark-helper" >&2; exit 1
fi
helper=$(realpath -- "$1")
[[ -x "$helper" ]] || { echo 'Helper not found.' >&2; exit 1; }
for command in ip nft ping python3; do command -v "$command" >/dev/null; done
left="ms-left-$$"; right="ms-right-$$"
cleanup() { ip netns del "$left" 2>/dev/null || true; ip netns del "$right" 2>/dev/null || true; }
trap cleanup EXIT
ip netns add "$left"
ip netns add "$right"
ip -n "$left" link add ms0 type veth peer name ms1 netns "$right"
ip -n "$left" addr add 10.231.0.1/24 dev ms0
ip -n "$right" addr add 10.231.0.2/24 dev ms1
ip -n "$left" link set lo up; ip -n "$right" link set lo up
ip -n "$left" link set ms0 up; ip -n "$right" link set ms1 up
ip -n "$left" -6 addr add fd42:231::1/64 dev ms0 nodad
ip -n "$right" -6 addr add fd42:231::2/64 dev ms1 nodad
left_run() { ip netns exec "$left" "$@"; }
right_run() { ip netns exec "$right" "$@"; }
expect_drop() { if "$@" >/dev/null 2>&1; then echo 'FAIL: traffic survived containment' >&2; exit 1; fi; }
left_run ping -c1 -W1 10.231.0.2 >/dev/null
right_run ping -c1 -W1 10.231.0.1 >/dev/null
# Existing, unrelated policy must survive every recovery operation.
left_run nft add table inet unrelated_test
left_run "$helper" block 10.231.0.1 10.231.0.2
expect_drop left_run ping -c1 -W1 10.231.0.2
expect_drop right_run ping -c1 -W1 10.231.0.1
left_run "$helper" status | python3 -c 'import json,sys; b=json.load(sys.stdin)["blocks"]; assert len(b)==1 and b[0]["expiresSeconds"]>0'
# Reversed endpoints are idempotent.
left_run "$helper" block 10.231.0.2 10.231.0.1
left_run "$helper" unblock 10.231.0.2 10.231.0.1
left_run ping -c1 -W1 10.231.0.2 >/dev/null
right_run ping -c1 -W1 10.231.0.1 >/dev/null
left_run "$helper" unblock 10.231.0.1 10.231.0.2
left_run ping -6 -c1 -W1 fd42:231::2 >/dev/null
left_run "$helper" block fd42:231::1 fd42:231::2
expect_drop left_run ping -6 -c1 -W1 fd42:231::2
expect_drop right_run ping -6 -c1 -W1 fd42:231::1
left_run "$helper" block 10.231.0.1 10.231.0.2
left_run "$helper" status | python3 -c 'import json,sys; assert len(json.load(sys.stdin)["blocks"])==2'
left_run "$helper" unblock-all
left_run ping -c1 -W1 10.231.0.2 >/dev/null
left_run ping -6 -c1 -W1 fd42:231::2 >/dev/null
left_run nft list table inet unrelated_test >/dev/null
left_run "$helper" status | python3 -c 'import json,sys; assert json.load(sys.stdin)["blocks"]==[]'
echo 'PASS: bidirectional IPv4/IPv6 containment, recovery, idempotence, status, and unrelated rules preserved.'
