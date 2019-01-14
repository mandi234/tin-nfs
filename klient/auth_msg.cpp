//
// Created by mandi on 10.01.19.
//
#include "auth.h"
#include "auth_msg.h"
#include "send_sock_msg.h"
#include <cstring>
#include <iostream>
void mynfs_auth(char *host, uint16_t port, char *user, char *password) {
    RequestAuth req_message;
    ResponseAuth *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_AUTH;
    strcpy((char *) req_message.login, user);
    strcpy((char *) req_message.password, password);

    req_message.login_len = htonl((uint32_t) strlen(user));

    req_message.password_len = htonl((uint32_t) strlen(password));

    send_message_and_wait_for_response(host, port, (uint8_t *) &req_message, sizeof(req_message), response);

    res_message = (ResponseAuth *) response;
    uint32_t token = ntohl(res_message->token);
    std::cout << token << std::endl;
    global_token = token;
    global_port = port;
}