//
// Created by azablock on 24.01.19.
//

#ifndef KAMIL_DIRP_HOLDER_H
#define KAMIL_DIRP_HOLDER_H

#include <map>
#include <dirent.h>
#include "../common/singleton.h"


class DirpHolder : public Singleton<DirpHolder> {
public:
    friend class Singleton<DirpHolder>;

    void add(int fd, DIR* dirp);

    void remove(int fd);

    DIR* get(int fd) const;

private:
    std::map<int, DIR*> _dirpEntries;
};


#endif //KAMIL_DIRP_HOLDER_H
