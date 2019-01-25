//
// Created by root on 1/14/19.
//
#include <arpa/inet.h>
#include <iostream>
#include <sys/stat.h>
#include "operation.h"
#include "proto.h"
#include "send_sock_msg.h"
#include "auth.h"


int mynfs_read(int fd, void *buf, int count) {
    RequestOperation req_message;
    ResponseOperation *res_message;
    char response[count];
    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_READ;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = htonl(count);

    send_message_and_wait_for_response((char*)global_host.c_str(), (uint16_t)global_port, (uint8_t *) &req_message,
            sizeof(req_message), response, (uint32_t) count);

    res_message = (ResponseOperation *) response;


    int32_t buf_len = ntohl(res_message->buf_len);
    std::cout << "RECEIVED mynfs_read RESPONSE !" << buf_len << std::endl;

    //std::cout<<res_message->buf << std::endl;
    memcpy(buf, res_message->buf, buf_len);
    return buf_len;
}


int mynfs_write(int fd, void* fileContent, void *respBuf, int count) {
    RequestOperation req_message;
    ResponseOperation *res_message;
    char response[count];
    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_WRITE;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = count;
    memcpy(req_message.buf, (uint8_t *) fileContent, count);

    send_message_and_wait_for_response((char*)global_host.c_str(), (uint16_t)global_port, (uint8_t *) &req_message, sizeof(req_message), response, sizeof(ResponseOperation));

    res_message = (ResponseOperation *) response;

    std::cout << "RECEIVED mynfs_write RESPONSE !" << std::endl;

    memcpy(respBuf, res_message->buf, res_message->buf_len);

    return res_message->buf_len;
}


int mynfs_lseek(int fd, off_t offset, unsigned int whence, void *buf) {
    RequestOperation req_message{};
    ResponseOperation *res_message;
    char response[4096];

    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_LSEEK;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = 1024; //todo pass count param?
    req_message.offset = (uint32_t) offset; //todo uint32_t casting?
    req_message.whence = whence;

    send_message_and_wait_for_response(
            (char*)global_host.c_str(),
            (uint16_t)global_port,
            (uint8_t *) &req_message,
            sizeof(req_message),
            response,
            sizeof(ResponseOperation)
    );

    res_message = (ResponseOperation *) response;

    memcpy(buf, res_message->buf, res_message->buf_len);

    return res_message->buf_len;
}


int mynfs_close(int fd, void *buf) {
    RequestOperation req_message{};
    ResponseOperation *res_message;
    char response[4096];

    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_CLOSE;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = 1024; //todo pass count param?

    send_message_and_wait_for_response(
            (char*)global_host.c_str(),
            (uint16_t)global_port,
            (uint8_t *) &req_message,
            sizeof(req_message),
            response,
            sizeof(ResponseOperation)
    );

    res_message = (ResponseOperation *) response;

    memcpy(buf, res_message->buf, res_message->buf_len);

    return res_message->buf_len;
}


//todo return type int?
struct stat* mynfs_fstat(int fd, void *buf) {
    RequestOperation req_message{};
    ResponseOperation *res_message;
    char response[4096];

    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_FSTAT;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = 1024; //todo pass count param?

    send_message_and_wait_for_response(
            (char*)global_host.c_str(),
            (uint16_t)global_port,
            (uint8_t *) &req_message,
            sizeof(req_message),
            response,
            sizeof(ResponseOperation)
    );

    res_message = (ResponseOperation *) response;

    memcpy(buf, res_message->buf, res_message->buf_len);

    return (struct stat*) buf;
}


int mynfs_readdir(int fd, void *buf, int count) {
    RequestOperation req_message{};
    ResponseOperation *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_READDIR;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = count;

    send_message_and_wait_for_response(
            (char*)global_host.c_str(),
            (uint16_t)global_port,
            (uint8_t *) &req_message,
            sizeof(req_message),
            response,
            count
    );

    res_message = (ResponseOperation *) response;

    std::cout << "RECEIVED mynfs_readdir RESPONSE ! " << std::endl;
    std::cout<<res_message->buf << std::endl;

    memcpy(buf, res_message->buf, res_message->buf_len);

    return res_message->buf_len;
}


int mynfs_closedir(int fd, void *buf) {
    RequestOperation req_message{};
    ResponseOperation *res_message;
    char response[4096];
    req_message.msg_id = MSG_REQUEST_OPERATION;
    req_message.function_id = OPERATION_MSG_REQUEST_CLOSEDIR;
    req_message.descriptor = htonl(fd);
    req_message.token = htonl(global_token);
    req_message.count = 1024;

    send_message_and_wait_for_response(
            (char*)global_host.c_str(),
            (uint16_t)global_port,
            (uint8_t *) &req_message,
            sizeof(req_message),
            response,
            sizeof(ResponseOperation)
    );

    res_message = (ResponseOperation *) response;

    std::cout << "RECEIVED mynfs_closedir RESPONSE ! " << std::endl;
    std::cout<<res_message->buf << std::endl;

    memcpy(buf, res_message->buf, res_message->buf_len);

    return res_message->buf_len;
}