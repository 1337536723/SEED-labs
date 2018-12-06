#!/bin/bin/python
#Author	Alexey Titov
#version 1.1

from scapy.all import *

a = IP()
a.src = '99.99.99.99'	#my new IP
a.dst = '10.1.8.15'		
b = ICMP()
p = a/b
send(p)