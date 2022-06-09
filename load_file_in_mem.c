/*
** EPITECH PROJECT, 2021
** BootstrapBSQ
** File description:
** load_file_in_mem.c
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        exit(84);
    return fd;
}

char *read_file(char const *filepath)
{
    struct stat file_stat;
    int fd = open_file(filepath);
    char *buffer;

    stat(filepath, &file_stat);
    buffer = malloc(sizeof(char) * file_stat.st_size);
    read(fd, buffer, file_stat.st_size);
    return buffer;
}