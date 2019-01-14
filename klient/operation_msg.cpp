//
// Created by qarol on 1/13/19.
//

#include "operation_msg.h"
#include "send_sock_msg.h"
void mynfs_operation(char *host, uint16_t port, uint8_t function_id, uint32_t descriptor, uint32_t count, uint32_t whence, uint32_t offset)
{
    RequestOperation req_message;

    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = function_id;
    req_message.descriptor = descriptor;
    req_message.count = count;
    req_message.whence = whence;
    req_message.offset = offset;

    send_message(host, port, (uint8_t *)&req_message, sizeof(req_message));
}
