//
// Created by qarol on 1/13/19.
//

#include "open_msg.h"
#include "send_sock_msg.h"
#include <cstring>
void mynfs_open(char *host, uint16_t port, uint32_t user_id, uint8_t function_id, uint32_t oflag, uint32_t mode, char* hostt, char* path)
{
    RequestOpen req_message;

    req_message.msg_id = MSG_REQUEST_OPEN;
    req_message.user_id = user_id;
    req_message.function_id = function_id;
    req_message.oflag = oflag;
    req_message.mode = mode;
    strcpy((char*)req_message.host, hostt);
    strcpy((char*)req_message.path, path);

    req_message.host_len = (uint32_t) strlen(hostt);
    req_message.path_len = (uint32_t) strlen(path);

    send_message(host, port, (uint8_t *)&req_message, sizeof(req_message));
}