//
// Created by mandi on 10.01.19.
//

#ifndef KLIENT_PROTO_H
#define KLIENT_PROTO_H
#include <stdint.h>

#define MSG_REQUEST_AUTH 0
#define MSG_RESPONSE_AUTH 1
#define MSG_REQUEST_OPEN 2
#define MSG_RESPONSE_OPEN 3
#define MSG_REQUEST_OPERATION 4
#define MSG_RESPONSE_OPERATION 5

#define OPEN_MSG_REQUEST_OPEN 6
#define OPEN_MSG_RESPONSE_OPEN 7
#define OPEN_MSG_REQUEST_OPENDIR 8
#define OPEN_MSG_RESPONSE_OPENDIR 9
#define OPEN_MSG_REQUEST_UNLINK 10
#define OPEN_MSG_RESPONSE_UNLINK 11

#define OPERATION_MSG_REQUEST_READ 12
#define OPERATION_MSG_RESPONSE_READ 13

#define OPERATION_MSG_REQUEST_WRITE 14
#define OPERATION_MSG_RESPONSE_WRITE 15

#define OPERATION_MSG_REQUEST_LSEEK 16
#define OPERATION_MSG_RESPONSE_LSEEK 17

#define OPERATION_MSG_REQUEST_CLOSE 18
#define OPERATION_MSG_RESPONSE_CLOSE 19

#define OPERATION_MSG_REQUEST_FSTAT 20
#define OPERATION_MSG_RESPONSE_FSTAT 21

#define OPERATION_MSG_REQUEST_READDIR 22
#define OPERATION_MSG_RESPONSE_READDIR 23

#define OPERATION_MSG_REQUEST_CLOSEDIR 24
#define OPERATION_MSG_RESPONSE_CLOSEDIR 25

#define OPERATION_MSG_RESPONSE_END_RESPONSE 26



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
    uint8_t msg_id;
    uint32_t token;
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
    uint8_t msg_id;
    uint32_t token;
    uint8_t function_id;
    uint32_t descriptor;
    uint32_t count;
    uint32_t whence;
    uint32_t offset;
    uint8_t buf[1024];
};

struct ResponseOperation {
    uint8_t msg_id;
    int32_t error;
    uint32_t buf_len;
    uint8_t buf[];
};



#endif //KLIENT_PROTO_H
