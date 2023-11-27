#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFSIZE 1024

/**
 * main - copies a file's content to another file
 * @argc: no of arguments
 * @argv: arguments passed to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    const char *file_from, *file_to;
    int fd_read, fd_write;
    size_t readbytes, writebytes;
    char buffer[BUFFSIZE];

    (void)argc;
    file_from = argv[1];
    file_to = argv[2];

    fd_read = open(file_from, O_RDONLY);
    if (fd_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return 98;
    }

    fd_write = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_write == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd_read);
        return 99;
    }

    while ((readbytes = read(fd_read, buffer, BUFFSIZE)) > 0) 
    {
        writebytes = write(fd_write, buffer, readbytes);
        if (writebytes == (long unsigned int)-1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(fd_read);
            close(fd_write);
            return 99;
        }
        if (writebytes != readbytes) {
            dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", file_to);
            close(fd_read);
            close(fd_write);
            return 99;
        }
    }

    if (readbytes == (long unsigned int)-1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_read);
        close(fd_write);
        return 98;
    }

    if (close(fd_read) == -1 || close(fd_write) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
        return (100);
    }

    return (0);
}

