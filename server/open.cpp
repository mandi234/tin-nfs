//
// Created by mandi on 10.01.19.
//
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <arpa/inet.h>
#include "open.h"
#include "error.h"
#include "proto.h"
uint32_t handle_open_request(char *msg, int len, char **resp, int *response_len) {

    RequestOpen *request_open = (RequestOpen*) msg;
    std::cout<< "IN HANDLE OPEN REQUEST "<< (int)request_open->function_id << std::endl;
    switch(request_open->function_id) {
        case OPEN_MSG_REQUEST_OPEN: {
            int oflag = ntohl(request_open->oflag);
            mode_t mode = ntohl(request_open->mode);
            std::cout<< "EXECUTING OPEN ARGS : "<<std::endl;
            std::cout<< "PATH : "<< request_open->path<<std::endl;
            std::cout<< "OFLAG : "<< oflag<<std::endl;
            std::cout<< "MODE : "<< mode<<std::endl;
            int32_t error = open((char *) request_open->path, oflag, mode);
            auto *response_open = (ResponseOpen *) malloc(sizeof(ResponseOpen));

            response_open->descriptor = htonl(error);
            response_open->error = htonl(errno);
            std::cout<<"EXECUTED OPEN SUCCESFULLY" << error <<  std::endl;
            *response_len = sizeof(ResponseOpen);
            *resp = (char *) response_open;
        }
        break;
        case OPEN_MSG_REQUEST_OPENDIR:
            break;
        case OPEN_MSG_REQUEST_UNLINK:
            break;
        default:
            return ENFSPROTO;
    }
}

uint32_t handle_open_response(char *msg, int len) {
    auto msg_id = (uint8_t) msg[0];

    switch(msg_id) {
        case OPEN_MSG_RESPONSE_OPEN:
            break;
        case OPEN_MSG_RESPONSE_OPENDIR:
            break;
        case OPEN_MSG_RESPONSE_UNLINK:
            break;
        default:
            return ENFSPROTO;
    }
}