//
// Created by qarol on 1/13/19.
//

#ifndef KLIENT_OPEN_MSG_H
#define KLIENT_OPEN_MSG_H
#include "proto.h"

void mynfs_open(char *host, uint16_t port, uint32_t user_id, uint8_t function_id, uint32_t oflag, uint32_t mode, uint8_t* hostt, uint8_t* path);

#endif //KLIENT_OPEN_MSG_H
