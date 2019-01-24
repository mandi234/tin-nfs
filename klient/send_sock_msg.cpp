//
// Created by mandi on 10.01.19.
//

#include "send_sock_msg.h"
#include <limits.h>
int send_message_and_wait_for_response(char *server_ip, uint16_t port, uint8_t *msg, uint32_t msg_len, char *recvBuff, uint32_t expected_response_size)
{
    int sockfd = 0, n = 0;
    struct sockaddr_in serv_addr;

    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Error : Could not create socket \n");
        return 1;
    }

    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    if(inet_pton(AF_INET, server_ip, &serv_addr.sin_addr)<=0)
    {
        printf("\n inet_pton error occured\n");
        return 1;
    }

    if( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\n Error : Connect Failed \n");
        return 1;
    }

    send(sockfd, msg, msg_len, 0);

    read(sockfd, recvBuff, expected_response_size);



    return 0;
}