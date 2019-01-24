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
#include <ctime>

int main(int argc, char *argv[])
{
    char result_buf[16796];
    char readdir_result_buf[1024];
    char write_result_buf[1024];


    mynfs_auth("127.0.0.1", 8080, "kamil", "somepassword");



    //OPEN
    //fixme leci -1 (juz w open_msg_handler.cpp (serwer))
    int configFd = mynfs_open("127.0.0.1", "config.txt", O_RDONLY, 0);
    std::cout << "configFd: " << configFd;


    mynfs_read(configFd, result_buf, 16796);

    std::cout << result_buf << std::endl;
    //OPEN DIR
    //fixme leci -1 (juz w open_msg_handler.cpp (serwer))
    //todo setup relative dir path, "./../" prefix in client will be removed
//    int nfs_root_fd = mynfs_opendir("127.0.0.1", "./../nfs_root", O_DIRECTORY | O_RDONLY, 0);
//    std::cout << "'nfs_root' directory fd: " << nfs_root_fd << "\n\n";


    //READ DIR
    //fixme leci -1 (juz w operation_msg_handler.cpp (serwer))
//    mynfs_readdir(nfs_root_fd, readdir_result_buf, 1024);
//    std::string nfs_root_content_str(readdir_result_buf);
//    std::cout << "nfs_root content:\n\n" << readdir_result_buf << "\n\n";


    //WRITE
    //fixme leci -1 (juz w operation_msg_handler.h (serwer))
    int fileWriteFd = mynfs_open("127.0.0.1", "file_write_test_1.txt", O_RDONLY, 1024);
    auto now = time(NULL);
    std::string nowStr = ctime(&now);
    std::string fileContent = "some new file content " + nowStr;
    int write_res_buf_len = mynfs_write(fileWriteFd, (void*) fileContent.c_str(), write_result_buf, 1024);
    std::cout << "write_res_buf_len: " << write_res_buf_len << "\n\n";


    return 0;
}