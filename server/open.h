//
// Created by mandi on 10.01.19.
//

#ifndef KAMIL_OPEN_H
#define KAMIL_OPEN_H

#include <stdint.h>

#define OPEN_MSG_REQUEST_OPEN 6
#define OPEN_MSG_RESPONSE_OPEN 7
#define OPEN_MSG_REQUEST_OPENDIR 8
#define OPEN_MSG_RESPONSE_OPENDIR 9
#define OPEN_MSG_REQUEST_UNLINK 10
#define OPEN_MSG_RESPONSE_UNLINK 11


uint32_t handle_open_request(char *msg, int len, char **resp, int *response_len);
uint32_t handle_open_response(char *msg, int len);

#endif //KAMIL_OPEN_H
