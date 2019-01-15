//
// Created by mandi on 10.01.19.
#include "error.h"
#include "proto.h"
#include "open.h"
#include "operation.h"
#include "auth.h"
#include <iostream>
#include <arpa/inet.h>
#include <utility>
uint32_t handle_message(char *msg, int len, char **resp, int *response_len)
{
    if(len <= 0) {
        return ENFSPROTO;
    }

    auto msg_id = (uint8_t) msg[0];
    std::cout << "MESSAGE ID " << (int)msg_id << std::endl;
    switch(msg_id) {
        case MSG_REQUEST_AUTH: {
            std::cout << "TEST AUTH" << std::endl;
            uint32_t token;
            token = authorize(msg);
            auto *response_auth = (ResponseAuth *) malloc(sizeof(ResponseAuth));
            if (token) {
                response_auth->error = 0;
                response_auth->msg_id = MSG_RESPONSE_AUTH;
                response_auth->token = htonl(token);
            } else {
                response_auth->error = 0;
                response_auth->msg_id = MSG_RESPONSE_AUTH;
            }
            std::cout<<"ASSIGNED TOKEN " << token <<  std::endl;
            *response_len = sizeof(ResponseAuth);
            *resp = (char *) response_auth;
        }
            break;
        case MSG_RESPONSE_AUTH:
            break;
        case MSG_REQUEST_OPEN:
            std::cout<< "MSG_REQUEST OPEN" << std::endl;
            handle_open_request(msg, len, resp, response_len);
            break;
        case MSG_RESPONSE_OPEN:
            handle_open_response(msg, len);
            break;
        case MSG_REQUEST_OPERATION:
            handle_operation_request(msg, len, resp, response_len);
            break;
        case MSG_RESPONSE_OPERATION:
            handle_operation_response(msg, len);
            break;
        default:
            return ENFSPROTO;
    }
    return 0;
}