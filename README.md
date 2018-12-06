# SEED Attack Labs

These attack labs cover some of the most common vulnerabilties in general software. They show how attacks work in exploiting these vulnerabilities.

## Motivation

The labs were completed as a part of the labworks in Cyber Lab - Attack (7037930) at Ariel University. The course is well structured to understand the concepts of Computer Security. <br>

## List of Attacks

**Race Condition Vulnerability**<br>
Description: A race condition occurs when multiple processes access and manipulate the same data concurrently, and the outcome of the
execution depends on the particular order in which the access takes place. If a privileged program has a
race-condition vulnerability, attackers can run a parallel process to “race” against the privileged program,
with an intention to change the behaviors of the program. The task is to exploit the vulnerability and gan root privilege.

**Dirty COW Attack**<br>
Description: A case of Race condition vulnerability which affected Linux-based operating systems and Android. We launch this attack to modify /etc/passwd file.

**DNS Local**<br>
Description: DNS (Domain Name System) is the Internet’s phone book; it translates hostnames to IP addresses (and vice versa). This translation is through DNS resolution, which happens behind the scene. DNS attacks manipulate
this resolution process in various ways, with an intent to misdirect users to alternative destinations, which are often malicious. The objective of this lab is to understand how such attacks work. Students will
first set up and configure a DNS server, and then they will try various DNS attacks on the target that is also within the lab environment.
The difficulties of attacking local victims versus remote DNS servers are quite different. Therefore, we have developed two labs, one focusing on local DNS attacks, and the other on remote DNS attack. This lab
focuses on local attacks. 

**Sniffing and Spoofing**<br>
Description: Packet sniffing and spoofing are two important concepts in network security; they are two major threats in network communication. Being able to understand these two threats is essential for understanding security
measures in networking. There are many packet sniffing and spoofing tools, such as Wireshark, Tcpdump, Netwox, Scapy, etc. Some of these tools are widely used by security experts, as well as by
attackers. Being able to use these tools is important for students, but what is more important for students in a network security course is to understand how these tools work, i.e., how packet sniffing and spoofing are
implemented in software.
The objective of this lab is two-fold: learning to use the tools and understanding the technologies underlying these tools. For the second object, students will write simple sniffer and spoofing programs, and gain
an in-depth understanding of the technical aspects of these programs.

**Web Tracking Elgg**<br>
Description: Behavioral targeting is a type of online advertising where ads are displayed based on the users web-browsing behavior. The user leaves a trail of digital foot prints moving from one website to the other. Behavioral
targeting anonymously monitors and tracks the sites visited by a user. When a user surfs internet, the pages they visit, the searches they make, location of the user browsing from, device used for browsing and many
other inputs are used by the tracking sites to collect data. A user profile is created from the data and datamined for an online behavioral pattern of the user. As a result when users return to a specific site or a
network of sites, the created user profiles are helpful in reaching the targeted audience to advertise. The targeted ads will fetch more user interest, the publisher (or seller) can charge a premium for these ads over
random advertising or ads based on the context of a site.

## Key Learnings

- These attack labs gives us the idea of fundamental principles of computer system security, including authentication, access control,
capability, security policies, sandbox, software vulnerabilities, and web security.

- Identifying the vulnerabilities and exploit them. Further work on countermeasures as a security solution to the problem.

```
References

1. http://www.cis.syr.edu/~wedu/Teaching/CompSec/labs.html
2. Computer Security: A Hands-on Approach by Wenliang Du 
```

