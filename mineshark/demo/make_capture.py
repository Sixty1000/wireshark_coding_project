#!/usr/bin/env python3
"""Write a tiny valid Ethernet/IPv4/ICMP capture for offline UI walkthroughs."""
import socket
import struct
import sys
from pathlib import Path


def checksum(data):
    if len(data) % 2:
        data += b"\0"
    total = sum(struct.unpack("!%dH" % (len(data) // 2), data))
    while total >> 16:
        total = (total & 0xFFFF) + (total >> 16)
    return (~total) & 0xFFFF


def packet(source, destination, reply, seq):
    payload = b"Mineshark lab demonstration"
    icmp = struct.pack("!BBHHH", 0 if reply else 8, 0, 0, 0x4D53, seq) + payload
    icmp = icmp[:2] + struct.pack("!H", checksum(icmp)) + icmp[4:]
    header = struct.pack("!BBHHHBBH4s4s", 0x45, 0, 20 + len(icmp), seq, 0, 64, 1, 0,
                         socket.inet_aton(source), socket.inet_aton(destination))
    header = header[:10] + struct.pack("!H", checksum(header)) + header[12:]
    ethernet = bytes.fromhex("0800270000040800270000150800")
    if reply:
        ethernet = ethernet[6:12] + ethernet[:6] + ethernet[12:]
    return ethernet + header + icmp


def main():
    output = Path(sys.argv[1] if len(sys.argv) > 1 else "mineshark-demo.pcap")
    with output.open("wb") as stream:
        stream.write(struct.pack("<IHHIIII", 0xA1B2C3D4, 2, 4, 0, 0, 65535, 1))
        for sequence in range(1, 9):
            for reply in (False, True):
                data = packet("10.0.2.4" if reply else "10.0.2.15",
                              "10.0.2.15" if reply else "10.0.2.4", reply, sequence)
                stream.write(struct.pack("<IIII", 1792699200 + sequence, 1000 if reply else 0, len(data), len(data)))
                stream.write(data)
    print(output)


if __name__ == "__main__":
    main()
