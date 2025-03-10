#include "randombytes.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void randombytes(unsigned char *buf, size_t size) {
    int fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0) {
        perror("open /dev/urandom");
        exit(EXIT_FAILURE);
    }

    ssize_t result = read(fd, buf, size);
    if (result < 0) {
        perror("read /dev/urandom");
        exit(EXIT_FAILURE);
    }

    close(fd);
}
