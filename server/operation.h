//
// Created by mandi on 10.01.19.
//

#ifndef KAMIL_OPERATION_H
#define KAMIL_OPERATION_H

#include <stdint.h>
#include "operation_handlers/operation_msg_handler.h"

#define OPERATION_MSG_REQUEST_READ 12
#define OPERATION_MSG_RESPONSE_READ 13

#define OPERATION_MSG_REQUEST_WRITE 14
#define OPERATION_MSG_RESPONSE_WRITE 15

#define OPERATION_MSG_REQUEST_LSEEK 16
#define OPERATION_MSG_RESPONSE_LSEEK 17

#define OPERATION_MSG_REQUEST_CLOSE 18
#define OPERATION_MSG_RESPONSE_CLOSE 19

#define OPERATION_MSG_REQUEST_FSTAT 20
#define OPERATION_MSG_RESPONSE_FSTAT 21

#define OPERATION_MSG_REQUEST_READDIR 22
#define OPERATION_MSG_RESPONSE_READDIR 23

#define OPERATION_MSG_REQUEST_CLOSEDIR 24
#define OPERATION_MSG_RESPONSE_CLOSEDIR 25

static OperationMsgHandler operationMsgHandler;

uint32_t handle_operation_request(char *msg, int len, char **resp, int *response_len);
uint32_t handle_operation_response(char *msg, int len);


#endif //KAMIL_OPERATION_H
