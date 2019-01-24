//
// Created by root on 1/14/19.
//

#include "open.h"
#include "proto.h"
#include "auth.h"
#include "send_sock_msg.h"
#include <cstring>
#include <iostream>
#include <arpa/inet.h>
int mynfs_open (char *host, char *path, int oflag, int mode) {
    RequestOpen req_message;
    ResponseOpen *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_OPEN;
    req_message.function_id = OPEN_MSG_REQUEST_OPEN;
    strcpy((char*)req_message.path, path);
    req_message.oflag = htonl(oflag);
    req_message.mode = htonl(mode);
    req_message.token = global_token;

    send_message_and_wait_for_response(host, global_port, (uint8_t *) &req_message, sizeof(req_message), response);

    res_message = (ResponseOpen *) response;

    uint32_t descriptor = ntohl(res_message->descriptor);
    std::cout << descriptor << std::endl;

    return descriptor;
}

int mynfs_opendir(char *host, char *path, int oflag, int mode) {
    RequestOpen req_message;
    ResponseOpen *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_OPEN;
    req_message.function_id = OPEN_MSG_REQUEST_OPENDIR;
    strcpy((char*)req_message.path, path);
    req_message.oflag = htonl(oflag);
    req_message.mode = htonl(mode);
    req_message.token = global_token;

    send_message_and_wait_for_response(host, global_port, (uint8_t *) &req_message, sizeof(req_message), response);

    res_message = (ResponseOpen *) response;

    uint32_t descriptor = ntohl(res_message->descriptor);
    std::cout << descriptor << std::endl;

    return descriptor;
}