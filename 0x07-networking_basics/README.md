# Networking Basics

This repository contains the solutions to various tasks related to networking basics. Below are the details of each task:

## 0. OSI Model

The OSI (Open Systems Interconnection) model is an abstract model used to describe layered communication and computer network design. It is organized into seven layers, from the lowest level (Layer 1) for physical transmission to the highest level (Layer 7) for application-specific communication.

In this project, we will mainly focus on the following layers:
- Transport layer and its protocols TCP/UDP
- Network layer and its protocols IP and ICMP

To understand how each layer interacts, refer to the image provided in the task.

## 1. Types of Network

There are different types of networks:
- LAN (Local Area Network) connects local devices together.
- WAN (Wide Area Network) connects multiple LANs together, and WANs often operate over the Internet.

## 2. MAC and IP Address

- MAC (Media Access Control) address is the unique identifier of a network interface.
- IP (Internet Protocol) address is like a postal address for devices connected to a network.

## 3. UDP and TCP

UDP (User Datagram Protocol) is a fast but unreliable protocol that may lose data during transmission.
TCP (Transmission Control Protocol) is a slower but reliable protocol that ensures data integrity.

## 4. TCP and UDP Ports

In networking, ports are used to identify specific applications or services on a device. A TCP/UDP network device has 65535 ports. Some commonly known ports include:
- Port 22 for SSH
- Port 80 for HTTP
- Port 443 for HTTPS

A Bash script has been provided to display listening ports and their associated processes.

## 5. Is the Host on the Network?

The script "5-is_the_host_on_the_network" uses ICMP (Internet Control Message Protocol) to ping an IP address provided as an argument. It checks if the network device is online and displays the round-trip time for the ICMP request.

To use the script, run:
./5-is_the_host_on_the_network {IP_ADDRESS}

If no IP address is provided, it will display the usage instructions.

Feel free to explore each task's directory for more details and implementation. Happy networking!

