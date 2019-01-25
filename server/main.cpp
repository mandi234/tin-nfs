
#include <unistd.h>
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h>
#include <thread>
#include <iostream>
#include <random>
#include "proto.h"
#include "user/user.h"
#include "auth.h"
#define PORT 8080

void handle_client(int socket)
{
    std::cout<<"TEST 1.25"<<std::endl;
    int32_t valread;
    char *input_buffer = (char*)malloc(4096);
    int input_buffer_size = 0;
    char *response;
    int response_len;

    while(valread = recv(socket, input_buffer + input_buffer_size, 4096, 0)) {
        if (valread < 4096) {
            break;
        }
        input_buffer_size += 4096;
        char *tmp_buffer = (char*) malloc(input_buffer_size + 4096);
        memcpy(tmp_buffer, input_buffer, input_buffer_size);
        free(input_buffer);
        input_buffer = tmp_buffer;
    }

    std::cout<<"TEST 1.5"<<std::endl;
    handle_message(input_buffer, valread, &response, &response_len);

    send(socket, response, response_len, 0);
    close(socket);
}




void start_server()
{
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address,
             sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    while(true)
    {
        if ((new_socket = accept(server_fd, (struct sockaddr *) &address,
                                 (socklen_t *) &addrlen)) < 0) {
            perror("accept");
            exit(EXIT_FAILURE);
        }
        std::thread t(handle_client, new_socket);
        t.detach();
    }
}



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    init_auth("config.txt");

    start_server();
} 
