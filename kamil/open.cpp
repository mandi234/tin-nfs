//
// Created by mandi on 10.01.19.
//

#include <iostream>
#include "open.h"
#include "error.h"

uint32_t handle_open_request(char *msg, int len) {
    auto msg_id = (uint8_t) msg[0];

    switch(msg_id) {
        case OPEN_MSG_REQUEST_OPEN:
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