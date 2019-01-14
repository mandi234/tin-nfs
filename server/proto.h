//
// Created by mandi on 10.01.19.
//

#ifndef KAMIL_PROTO_H
#define KAMIL_PROTO_H
#include <stdint.h>

uint32_t handle_message(char *msg, int len, char **resp, int *response_len);

#define MSG_REQUEST_AUTH 0
#define MSG_RESPONSE_AUTH 1
#define MSG_REQUEST_OPEN 2
#define MSG_RESPONSE_OPEN 3
#define MSG_REQUEST_OPERATION 4
#define MSG_RESPONSE_OPERATION 5


struct RequestAuth {
    uint8_t msg_id;
    uint32_t login_len;
    uint32_t password_len;
    uint8_t login[256];
    uint8_t password[256];
};

struct ResponseAuth {
    uint8_t msg_id;
    uint32_t token;
    int32_t error;
};

struct RequestOpen {
    uint32_t token;
    uint8_t msg_id;
    uint32_t user_id;
    uint8_t function_id;
    uint32_t oflag;
    uint32_t mode;
    uint32_t host_len;
    uint32_t path_len;
    uint8_t host[256];
    uint8_t path[256];
};

struct ResponseOpen {
    uint8_t msg_id;
    int32_t error;
    int32_t descriptor;
};

struct RequestOperation {
    uint32_t token;
    uint8_t msg_id;
    uint8_t function_id;
    uint32_t descriptor;
    uint32_t count;
    uint32_t whence;
    uint32_t offset;
};

struct ResponseOperation {
    uint8_t msg_id;
    int32_t error;
    uint32_t buf_len;
    uint8_t buf[1024];
};

#endif //KAMIL_PROTO_H
