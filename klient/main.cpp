#include "auth_msg.h"
#include "open.h"
#include "operation.h"
#include "sys/types.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

int main(int argc, char *argv[])
{
    char result_buf[1024];
    char readdir_result_buf[1024];

    mynfs_auth("127.0.0.1", 8080, "kamil", "somepassword");

    int descriptor = mynfs_open("127.0.0.1", "config.txt", O_RDONLY, 0);

    //todo setup relative dir path, "./../" prefix in client will be removed
//    mynfs_read(descriptor, result_buf, 1024);

    int nfs_root_fd = mynfs_opendir("127.0.0.1", "./../nfs_root", O_DIRECTORY | O_RDONLY, 0);
    std::cout << "'nfs_root' directory fd: " << nfs_root_fd << "\n\n";

    mynfs_readdir(nfs_root_fd, readdir_result_buf, 1024);
    std::string nfs_root_content_str(readdir_result_buf);
    std::cout << "nfs_root content:\n\n" << readdir_result_buf;

    return 0;
}