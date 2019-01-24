//
// Created by azablock on 15.01.19.
//

#ifndef KAMIL_OPERATION_HANDLER_H
#define KAMIL_OPERATION_HANDLER_H

#include <iostream>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>
#include <dirent.h>
#include <sys/stat.h>
#include "../proto.h"

class OperationMsgHandler {
public:
    void readFile(RequestOperation *request_operation, int len, char **resp, int *response_len);
    void writeFile(RequestOperation *request_operation, int len, char **resp, int *response_len);
    void lseekFile(RequestOperation *request_operation, int len, char **resp, int *response_len);
    void closeFile(RequestOperation *request_operation, int len, char **resp, int *response_len);
    void fileStatus(RequestOperation *request_operation, int len, char **resp, int *response_len);

    void readDir(RequestOperation *request_operation, int len, char **resp, int *response_len);
    void closeDir(RequestOperation *request_operation, int len, char **resp, int *response_len);
};


#endif //KAMIL_OPERATION_HANDLER_H
