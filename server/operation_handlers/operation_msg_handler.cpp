//
// Created by azablock on 15.01.19.
//


#include "operation_msg_handler.h"
#include "../dirp/dirp_holder.h"

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

    response_operation->msg_id = OPERATION_MSG_RESPONSE_READ;
    response_operation->buf_len = htonl(bytes_read);
    response_operation->error = htonl(errno);
    file_buffer[bytes_read] = '\0';
    std::cout << "FILE BUFFER   " << file_buffer << std::endl;
    std::cout<<"EXECUTED READ SUCCESFULLY" << bytes_read <<  std::endl;
    free(file_buffer);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::writeFile(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    int fd = ntohl(request_operation->descriptor);
    char *fileContent = (char *) request_operation->buf;
    ssize_t bytesWrittenCount = write(fd, fileContent, strlen(fileContent));

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));

    response_operation->msg_id = OPERATION_MSG_RESPONSE_WRITE;
    response_operation->buf_len = htonl(bytesWrittenCount);
    response_operation->error = htonl(errno);

    *response_len = sizeof(ResponseOperation);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::lseekFile(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    int fd = ntohl(request_operation->descriptor);
    uint32_t offset = request_operation->offset;
    uint32_t whence = request_operation->whence;

    __off_t lseekOffset = lseek(fd, offset, whence);

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    response_operation->msg_id = OPERATION_MSG_RESPONSE_LSEEK;
    memcpy(response_operation->buf, (char*) &lseekOffset, sizeof(__off_t)); //todo (char*) cast?

    *response_len = sizeof(ResponseOperation);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::closeFile(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    int fd = ntohl(request_operation->descriptor);
    int closeStatus = close(fd);

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    response_operation->msg_id = OPERATION_MSG_RESPONSE_CLOSE;
    memcpy(response_operation->buf, (char*) &closeStatus, sizeof(int)); //todo (char*) cast?

    *response_len = sizeof(ResponseOperation);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::fileStatus(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    int fd = ntohl(request_operation->descriptor);
    struct stat fstat_buffer{};

    fstat(fd, &fstat_buffer); //todo handle invalid fstat call (return value != 0)

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    response_operation->msg_id = OPERATION_MSG_RESPONSE_FSTAT;
    response_operation->error = htonl(errno);
    memcpy(response_operation->buf, (uint8_t*) &fstat_buffer, 1024); //todo (uint8_t*) cast? check if sizeof(struct stat) <= 1024

    *response_len = sizeof(ResponseOperation);
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

    response_operation->msg_id = OPERATION_MSG_RESPONSE_READDIR;
    memcpy(response_operation->buf, dirContent.c_str(), dirContent.length());
    response_operation->buf_len = static_cast<uint32_t>(dirContent.length());

    *response_len = sizeof(ResponseOpen);
    *resp = (char *) response_operation;
}

void OperationMsgHandler::closeDir(RequestOperation *request_operation, int len, char **resp, int *response_len) {
    uint32_t fd = request_operation->descriptor;
    DIR *dirp = DirpHolder::instance().get(fd);

    int closeDirStatus = closedir(dirp);
    DirpHolder::instance().remove(fd);

    auto *response_operation = (ResponseOperation *) malloc(sizeof(ResponseOperation));
    response_operation->msg_id = OPERATION_MSG_RESPONSE_CLOSEDIR;
    memcpy(response_operation->buf, (char*) &closeDirStatus, sizeof(int)); //todo (char*) cast?

    *response_len = sizeof(ResponseOperation);
    *resp = (char *) response_operation;
}
