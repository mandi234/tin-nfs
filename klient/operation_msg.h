//
// Created by qarol on 1/13/19.
//

#ifndef KLIENT_OPERATION_MSG_H
#define KLIENT_OPERATION_MSG_H
#include "proto.h"

void mynfs_operation(char *host, uint16_t port, uint8_t function_id, uint32_t descriptor, uint32_t count, uint32_t whence, uint32_t offset);

#endif //KLIENT_OPERATION_MSG_H
