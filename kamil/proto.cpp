//
// Created by mandi on 10.01.19.
#include "error.h"
#include "proto.h"
#include <iostream>
uint32_t handle_message(char *msg, int len)
{
    if(len <= 0) {
        return ENFSPROTO;
    }

    auto msg_id = (uint8_t) msg[0];

    switch(msg_id)
    {
        case MSG_REQUEST_AUTH:
            std::cout<<"CHUJ AUTH"<<std::endl;
            break;
        case MSG_RESPONSE_AUTH:
            break;
        case MSG_REQUEST_OPEN:
            break;
        case MSG_RESPONSE_OPEN:
            break;
        case MSG_REQUEST_OPERATION:
            break;
        case MSG_RESPONSE_OPERATION:
            break;
        default:
            return ENFSPROTO;

    }
}