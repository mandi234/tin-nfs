//
// Created by root on 1/14/19.
//

#ifndef KLIENT_OPERATION_H
#define KLIENT_OPERATION_H

int mynfs_read(int fd, void *buf, int count);

int mynfs_write(int fd, void *buf, int count);

int mynfs_lseek(int fd, off_t offset, int whence);

#endif //KLIENT_OPERATION_H
