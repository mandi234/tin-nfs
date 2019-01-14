//
// Created by mandi on 10.01.19.
//

#include "auth.h"
#include "error.h"


uint32_t authorize(char *msg) {
    auto requestAuth = (RequestAuth*) msg;

    User user{};
    user.login = (char*) requestAuth->login;
    user.password = (char*) requestAuth->password;

    return UsersHolder::instance().contains(user) ? 0 : ENFSAUTH;
}

void init(char *path) {
    std::fstream file(path, std::fstream::in | std::fstream::out);

    char user_and_password[256];

    while(file.getline(user_and_password, 256)) {
        std::cout<<user_and_password<<std::endl;
    }
}
