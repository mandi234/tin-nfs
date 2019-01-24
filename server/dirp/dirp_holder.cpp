//
// Created by azablock on 24.01.19.
//

#include "dirp_holder.h"


void DirpHolder::add(int fd, DIR *dirp) {
    _dirpEntries.insert(std::pair<int, DIR*>(fd, dirp));
}

void DirpHolder::remove(int fd) {
    _dirpEntries.erase(fd);
}

DIR* DirpHolder::get(int fd) const {
    return _dirpEntries.find(fd)->second;
}