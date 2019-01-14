//
// Created by mandi on 10.01.19.
//

#ifndef KAMIL_AUTH_H
#define KAMIL_AUTH_H
#include <fstream>
#include <string>
#include <iostream>
#include "proto.h"
#include "user/user.h"


void init_auth(char *path);

uint32_t  authorize(char *msg);




#endif //KAMIL_AUTH_H
