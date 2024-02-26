#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *message, const char *arg) {
    dprintf(STDERR_FILENO, "%s: %s %s\n", message, arg, strerror(code));
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3) {
        print_error(97, "Usage: cp file_from file_to", "");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error(98, "Error: Can't read from file", argv[1]);
    }

    
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (fd_to == -1) {
        print_error(99, "Error: Can't write to file", argv[2]);
    }

   
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            print_error(99, "Error: Can't write to file", argv[2]);
        }
    }


    if (bytes_read == -1) {
        print_error(98, "Error: Can't read from file", argv[1]);
    }

   
    if (close(fd_from) == -1) {
        print_error(100, "Error: Can't close fd", argv[1]);
    }
    if (close(fd_to) == -1) {
        print_error(100, "Error: Can't close fd", argv[2]);
    }

    return 0;
}
