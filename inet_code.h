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

#define PORT     8080
#define IP       "127.0.0.1"
#define MAXLINE 1024


void start(char *buffer);

#endif // INET_CODE_H
