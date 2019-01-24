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
#include "../proto.h"

class OperationMsgHandler {
public:
    static void readFile(RequestOperation *request_operation, int len, char **resp, int *response_len);
    static void readDir(RequestOperation *request_operation, int len, char **resp, int *response_len);

    static void writeFile(RequestOperation *pOperation, int len, char **pString, int *pInt);
};


#endif //KAMIL_OPERATION_HANDLER_H
