//
// Created by mandi on 10.01.19.
//
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#ifndef KLIENT_SEND_SOCK_MSG_H
#define KLIENT_SEND_SOCK_MSG_H

int send_message(char *server_ip, uint16_t port, uint8_t *msg, uint32_t msg_len);

#endif //KLIENT_SEND_SOCK_MSG_H
