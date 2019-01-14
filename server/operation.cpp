//
// Created by mandi on 10.01.19.
//

#include "operation.h"
#include "error.h"
#include "proto.h"
#include <iostream>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
uint32_t handle_operation_request(char *msg, int len, char **resp, int *response_len) {
    RequestOperation *request_operation = (RequestOperation*) msg;
    std::cout<< "IN HANDLE OPERATION REQUEST "<< (int)request_operation->function_id << std::endl;
    switch(request_operation->function_id) {
        case OPERATION_MSG_REQUEST_READ: {
            std::cout << "OPERATION_MSG_REQUEST_READ" << std::endl;
            int fd = ntohl(request_operation->descriptor);
            char file_buffer[1024];
            int32_t error = read(fd, file_buffer, 1024);
            auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));

            response_operation->buf_len = htonl(error);
            response_operation->error = htonl(errno);
            memcpy(response_operation->buf, file_buffer, 1024);
            std::cout<<"EXECUTED READ SUCCESFULLY" << error <<  std::endl;
            *response_len = sizeof(ResponseOperation);
            *resp = (char *) response_operation;
        }
            break;
        case OPERATION_MSG_REQUEST_WRITE:
            break;
        case OPERATION_MSG_REQUEST_LSEEK:
            break;
        case OPERATION_MSG_REQUEST_CLOSE:
            break;
        case OPERATION_MSG_REQUEST_FSTAT:
            break;
        case OPERATION_MSG_REQUEST_READDIR:
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