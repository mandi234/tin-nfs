//
// Created by azablock on 14.01.19.
//

#include "open_msg_handler.h"
#include <dirent.h>


void OpenMsgHandler::openFile(RequestOpen *request_open, int len, char **resp, int *response_len) {
    int oflag = ntohl(request_open->oflag);
    mode_t mode = ntohl(request_open->mode);
    std::cout << "EXECUTING OPEN ARGS : " << std::endl;
    std::cout << "PATH : " << request_open->path << std::endl;
    std::cout << "OFLAG : " << oflag << std::endl;
    std::cout << "MODE : " << mode << std::endl;
    int32_t fd = open((char *) request_open->path, oflag, mode);
    auto *response_open = (ResponseOpen *) malloc(sizeof(ResponseOpen));

    response_open->descriptor = htonl(fd);
    response_open->error = htonl(errno);
    std::cout << "EXECUTED OPEN SUCCESFULLY, FILE DESCRIPTOR: " << fd << std::endl;
    *response_len = sizeof(ResponseOpen);
    *resp = (char *) response_open;
}

void OpenMsgHandler::openDir(RequestOpen *request_open, int len, char **resp, int *response_len) {
    auto dir = opendir((const char *) request_open->path);
    int dirFd = dirfd(dir);

    auto *response_open = (ResponseOpen *) malloc(sizeof(ResponseOpen));

    std::cout << "\n\nEXECUTING OPEN DIR ARGS : " << std::endl;
    std::cout << "DIR PATH : " << request_open->path << std::endl;

    response_open->descriptor = htonl(dirFd);
    response_open->error = htonl(errno);

    *response_len = sizeof(ResponseOpen);
    *resp = (char *) response_open;
}

