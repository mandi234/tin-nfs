//
// Created by azablock on 15.01.19.
//


#include "operation_msg_handler.h"

void OperationMsgHandler::readFile(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    std::cout << "OPERATION_MSG_REQUEST_READ" << std::endl;
    int fd = ntohl(request_operation->descriptor);
    int count = ntohl(request_operation->count);
    char *file_buffer = (char*) malloc(count);
    int32_t bytes_read = read(fd, file_buffer, count);

    ResponseOperation *response_operation;
    if (bytes_read > 0) {
        response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation) + bytes_read);
        memcpy(response_operation->buf, file_buffer, bytes_read);
        *response_len = sizeof(ResponseOperation) + bytes_read;
    }
    else {
        response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
        *response_len = sizeof(ResponseOperation);
    }

    response_operation->buf_len = htonl(bytes_read);
    response_operation->error = htonl(errno);
    file_buffer[bytes_read] = '\0';
    std::cout << "FILE BUFFER   " << file_buffer << std::endl;
    std::cout<<"EXECUTED READ SUCCESFULLY" << bytes_read <<  std::endl;
    free(file_buffer);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::readDir(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    auto dirDescriptor = ntohl(request_operation->descriptor);
    auto dir = fdopendir(dirDescriptor);
    std::string dirContent;
    struct dirent *entry;

    while ((entry = readdir(dir)) != nullptr) {
        dirContent.append(entry->d_name).append("\n");
    }

    memcpy(response_operation->buf, dirContent.c_str(), dirContent.length());
    response_operation->buf_len = static_cast<uint32_t>(dirContent.length());

    *response_len = sizeof(ResponseOpen);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::writeFile(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    int fd = ntohl(request_operation->descriptor);
    char *fileContent = (char *) request_operation->buf;
    ssize_t bytesWrittenCount = write(fd, fileContent, strlen(fileContent));

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    std::string responseMsg = "Bytes written count: " + std::to_string(bytesWrittenCount);
    memcpy(response_operation->buf, responseMsg.c_str(), 1024);
    response_operation->buf_len = htonl(bytesWrittenCount);

    *response_len = sizeof(ResponseOperation);
    *resp = (char *) response_operation;
}