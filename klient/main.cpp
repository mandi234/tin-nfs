#include "auth_msg.h"
#include "open.h"
#include "sys/types.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    mynfs_auth("127.0.0.1", 8080, "kamil", "dupa1");

    mynfs_open("127.0.0.1", "config.txt", O_RDONLY, 0);
}