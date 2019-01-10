//
// Created by mandi on 10.01.19.
//

#ifndef KAMIL_AUTH_H
#define KAMIL_AUTH_H
#include <fstream>
#include <string>
#include <iostream>


void init(char *path)
{
    std::fstream file(path, std::fstream::in | std::fstream::out);

    char user_and_password[256];

    while(file.getline(user_and_password, 256))
    {
        std::cout<<user_and_password<<std::endl;
    }
}





#endif //KAMIL_AUTH_H

