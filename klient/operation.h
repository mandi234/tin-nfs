//
// Created by root on 1/14/19.
//

#ifndef KLIENT_OPERATION_H
#define KLIENT_OPERATION_H
#include <sys/types.h>
int mynfs_read(int fd, void *buf, int count);
int mynfs_write(int fd, void* fileContent, void *respBuf, int count);
int mynfs_lseek(int fd, off_t offset, unsigned int whence);
int mynfs_close(int fd, void *buf);
struct stat* mynfs_fstat(int fd, void *buf);

int mynfs_readdir(int fd, void *buf, int count);
int mynfs_closedir(int fd, void *buf);

#endif //KLIENT_OPERATION_H
