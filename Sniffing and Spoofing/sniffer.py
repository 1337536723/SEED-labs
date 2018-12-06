#!/bin/bin/python
#Author	Alexey Titov
#version 1.1

from scapy.all import *

def print_pkt(pkt):
	pkt.show()

#ICMP
pkt = sniff(filter='icmp', prn=print_pkt)
#TCP and 23
#pkt = sniff(filter='tcp port 23', prn=print_pkt)
#subnet
#pkt = sniff(filter='net 8.8.8.0/24', prn=print_pkt)