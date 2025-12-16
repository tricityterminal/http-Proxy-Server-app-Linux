#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>



int socketpipefd[2] = socketfdpipestr[2];

int pipeservflgs = O_DIRECT|O_NONBLOCK|O_NOTIFICATION_PIPE;

int pipeserv = pipe2(socketpipefd[2], int flags);

long socketfdpipestr[2] = {0};

long socketfdpipestr[1] = clisocket;

long socketfdpipestr[2] = srvsocket;

struct fd_pair socketpipestr{
socketpipestr.fd = socketfdpipestr[2];
};
