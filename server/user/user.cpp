//
// Created by azablock on 13.01.19.
//


#include <cstring>
#include "user.h"


void UsersHolder::add(User user) {
    user.token = rand();
    _users.push_back(user);
    _tokens[user.token] = &_users.back();
}

uint32_t UsersHolder::contains(User other) {;
    for(auto user: _users) {
        if (strcmp(user.login, other.login) == 0 && strcmp(user.password, other.password) == 0) {
            return user.token;
        }
    }
    return 0;
}