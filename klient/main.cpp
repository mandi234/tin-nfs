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
    char result_buf[200000];
    char readdir_result_buf[1024];
    char write_result_buf[1024];


    mynfs_auth("127.0.0.1", 8080, "kamil", "somepassword");



    int configFd = mynfs_open("127.0.0.1", "config.txt", O_RDONLY, 0);
    std::cout << "configFd: " << configFd;

    mynfs_lseek(configFd,2, SEEK_SET);

    mynfs_read(configFd, result_buf, 20000);

    std::cout << result_buf << std::endl;
    int close_status = mynfs_close(configFd);

    std::cout<< "CLOSE STATUS : " << close_status << std::endl;

    int nfs_root_fd = mynfs_opendir("127.0.0.1", "test_directory", O_DIRECTORY | O_RDONLY, 0);
    std::cout << "'nfs_root' directory fd: " << nfs_root_fd << "\n\n";



    mynfs_readdir(nfs_root_fd, readdir_result_buf, 1024);
    std::string nfs_root_content_str(readdir_result_buf);
    std::cout << "nfs_root content:\n\n" << readdir_result_buf << "\n\n";


    int fileWriteFd = mynfs_open("127.0.0.1", "file_write_test_1.txt", O_WRONLY | O_CREAT, 1024);
    auto now = time(NULL);
    std::string nowStr = ctime(&now);
    std::string fileContent = "some new file content " + nowStr;
    int write_res_buf_len = mynfs_write(fileWriteFd, (void*) fileContent.c_str(), write_result_buf, 1024);
    std::cout << "write_res_buf_len: " << write_res_buf_len << "\n\n";


    return 0;
}