//
// Created by mandi on 10.01.19.
//

#include "operation.h"
#include "error.h"

uint32_t handle_operation_request(char *msg, int len) {
    auto msg_id = (uint8_t) msg[0];

    switch(msg_id) {
        case OPERATION_MSG_REQUEST_READ:
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