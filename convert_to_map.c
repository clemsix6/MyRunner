/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** convert_to_map.c
*/

#include <stdlib.h>
#include <stdio.h>

int get_x_size(char const *file_map)
{
    int i = 0;

    while (file_map[i] != '\n')
        i++;
    return i;
}

int get_y_size(char const *file_map)
{
    int i = 0;
    int c = 0;

    while (file_map[i] != 'F') {
        if (file_map[i] == '\n')
            c++;
        i++;
    }
    return c + 1;
}

char **convert_to_map(char const *file_map, int *size_x, int *size_y)
{
    *size_x = get_x_size(file_map);
    *size_y = get_y_size(file_map);
    char **map = malloc(*size_y);
    int x = 0;
    int y = 0;

    for (int i = 0; i < *size_y; i++)
        map[i] = malloc(*size_x);
    for (int i = 0; file_map[i] != 0; i++) {
        if (file_map[i] == '\n') {
            x = 0;
            y++;
            continue;
        }
        map[y][x++] = file_map[i];
    }
    return map;
}