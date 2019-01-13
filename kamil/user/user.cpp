//
// Created by azablock on 13.01.19.
//


#include <cstring>
#include "user.h"


void UsersHolder::add(User user) {
    _users.push_back(user);
}

bool UsersHolder::contains(User other) {
    bool containsUser = false;

    for(auto user: _users) {
        if (strcmp(user.login, other.login) == 0 && strcmp(user.password, other.password) == 0) {
            containsUser = true;
            break;
        }
    }

    return containsUser;
}