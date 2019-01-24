//
// Created by mandi on 10.01.19.
//

#include "operation.h"
#include "error.h"
#include "proto.h"
#include "operation_handlers/operation_msg_handler.h"
#include <iostream>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

uint32_t handle_operation_request(char *msg, int len, char **resp, int *response_len) {
    RequestOperation *request_operation = (RequestOperation*) msg;
    std::cout<< "IN HANDLE OPERATION REQUEST "<< (int)request_operation->function_id << std::endl;
    switch(request_operation->function_id) {
        case OPERATION_MSG_REQUEST_READ:
            OperationMsgHandler::readFile(request_operation, len, resp, response_len);
            break;
        case OPERATION_MSG_REQUEST_WRITE:
            OperationMsgHandler::writeFile(request_operation, len, resp, response_len);
            break;
        case OPERATION_MSG_REQUEST_LSEEK:
            break;
        case OPERATION_MSG_REQUEST_CLOSE:
            break;
        case OPERATION_MSG_REQUEST_FSTAT:
            break;
        case OPERATION_MSG_REQUEST_READDIR:
            OperationMsgHandler::readDir(request_operation, len, resp, response_len);
            break;
        case OPERATION_MSG_REQUEST_CLOSEDIR:
            break;
        default:
            return ENFSPROTO;
    }
}

uint32_t handle_operation_response(char *msg, int len) {
    auto msg_id = (uint8_t) msg[0];

    switch(msg_id) {
        case OPERATION_MSG_RESPONSE_READ:
            break;
        case OPERATION_MSG_RESPONSE_WRITE:
            break;
        case OPERATION_MSG_RESPONSE_LSEEK:
            break;
        case OPERATION_MSG_RESPONSE_CLOSE:
            break;
        case OPERATION_MSG_RESPONSE_FSTAT:
            break;
        case OPERATION_MSG_RESPONSE_READDIR:
            break;
        case OPERATION_MSG_RESPONSE_CLOSEDIR:
            break;
        default:
            return ENFSPROTO;
    }

}