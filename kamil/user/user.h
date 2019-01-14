//
// Created by azablock on 13.01.19.
//

#ifndef KAMIL_USER_H
#define KAMIL_USER_H

#include <vector>
#include <algorithm>
#include "../common/singleton.h"

struct User {
    char* login;
    char* password;
};


class UsersHolder : public Singleton<UsersHolder> {
public:
    friend class Singleton<UsersHolder>;

    void add(User user);
    bool contains(User other);

private:
    std::vector<User> _users;
};



#endif //KAMIL_USER_H
