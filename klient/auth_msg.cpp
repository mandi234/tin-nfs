//
// Created by mandi on 10.01.19.
//

#include "auth_msg.h"
#include "send_sock_msg.h"
#include <cstring>
void mynfs_auth(char *host, uint16_t port, char *user, char *password)
{
    RequestAuth req_message;

    req_message.msg_id = MSG_REQUEST_AUTH;
    strcpy((char*)req_message.login, user);
    strcpy((char*)req_message.password, password);

    req_message.login_len = (uint32_t) strlen(user);

    req_message.password_len = (uint32_t) strlen(password);

    send_message(host, port, (uint8_t *)&req_message, sizeof(req_message));

}