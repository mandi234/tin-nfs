#include "auth_msg.h"
#include "open.h"
#include "operation.h"
#include "sys/types.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    mynfs_auth("127.0.0.1", 8080, "kamil", "somepassword");

    int descriptor = mynfs_open("127.0.0.1", "config.txt", O_RDONLY, 0);

    //todo setup relative dir path, "./../" prefix in client will be removed
    int openDirDescriptor = mynfs_opendir("127.0.0.1", "./../nfs_root", O_DIRECTORY | O_RDONLY, 0);

    char result_buf[1024];
    char opendir_result_buf[1024];
    mynfs_read(descriptor, result_buf, 1024);
    mynfs_read(openDirDescriptor, opendir_result_buf, 1024);
}