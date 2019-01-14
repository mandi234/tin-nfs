//
// Created by azablock on 13.01.19.
//

#ifndef KAMIL_USER_H
#define KAMIL_USER_H

#include <vector>
#include <algorithm>
#include <map>
#include "../common/singleton.h"

struct User {
    char* login;
    char* password;
    uint32_t token;
};


class UsersHolder : public Singleton<UsersHolder> {
public:
    friend class Singleton<UsersHolder>;

    void add(User user);
    uint32_t contains(User other);

private:
    std::vector<User> _users;

    std::map<uint32_t, User*> _tokens;
};



#endif //KAMIL_USER_H
