//
// Created by root on 1/14/19.
//

#ifndef KLIENT_OPERATION_H
#define KLIENT_OPERATION_H

int mynfs_read(int fd, void *buf, int count);
int mynfs_write(int fd, void* fileContent, void *respBuf, int count);
int mynfs_readdir(int fd, void *buf, int count);

#endif //KLIENT_OPERATION_H
