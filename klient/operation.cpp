//
// Created by root on 1/14/19.
//
#include <arpa/inet.h>
#include <iostream>
#include "operation.h"
#include "proto.h"
#include "send_sock_msg.h"
#include "auth.h"
int mynfs_read(int fd, void *buf, int count)
{
    RequestOperation req_message;
    ResponseOperation *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_READ;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = count;

    send_message_and_wait_for_response((char*)global_host.c_str(), (uint16_t)global_port, (uint8_t *) &req_message, sizeof(req_message), response);

    res_message = (ResponseOperation *) response;

    std::cout << "RECEIVED READ RESPONSE - NICE ! " << std::endl;

    //std::cout<<res_message->buf << std::endl;

    memcpy(buf, res_message->buf, res_message->buf_len);
    //uint32_t descriptor = ntohl(res_message->descriptor);
    //::cout << descriptor << std::endl;
    return res_message->buf_len;
    //return descriptor;
}