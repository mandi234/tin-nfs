//
// Created by mandi on 10.01.19.
//

#include "auth.h"
#include "error.h"
#include <string>
#include <sstream>
uint32_t authorize(char *msg) {
    auto requestAuth = (RequestAuth*) msg;

    User user{};
    user.login = (char*) requestAuth->login;
    user.password = (char*) requestAuth->password;
    return UsersHolder::instance().contains(user);
}

void init_auth(char *path) {
    std::fstream file(path, std::fstream::in | std::fstream::out);

    char user_and_password[256];

    while(file.getline(user_and_password, 256)) {
        std::string s = std::string(user_and_password);
        std::vector<std::string> result;
        std::istringstream iss(s);
        for(std::string s; iss >> s; )
            result.push_back(s);
        User tmp_user;
        tmp_user.login = (char*)result[0].c_str();
        tmp_user.password = (char*)result[1].c_str();
        UsersHolder::instance().add(User(tmp_user));
    }
}
