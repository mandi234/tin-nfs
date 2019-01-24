//
// Created by azablock on 14.01.19.
//

#ifndef KAMIL_OPEN_MSG_HANDLER_H
#define KAMIL_OPEN_MSG_HANDLER_H

#include "../proto.h"
#include <netinet/in.h>
#include <iostream>
#include <dirent.h>
#include <fcntl.h>


class OpenMsgHandler {
public:
    static void openFile(RequestOpen* request_open, int len, char **resp, int *response_len);
    static void openDir(RequestOpen* request_open, int len, char **resp, int *response_len);
};


#endif //KAMIL_OPEN_MSG_HANDLER_H
