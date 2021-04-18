#ifndef INET_CODE_H
#define INET_CODE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT     7051
#define IP       "192.168.200.202"
#define MAXLINE 1024


void port_listening(char *buffer); // listening on the specified port

#endif // INET_CODE_H
