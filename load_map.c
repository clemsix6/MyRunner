/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** load_map.c
*/

#include <stdlib.h>
#include "my_runner.h"

map_t *load_map(char const *file_path)
{
    int size_x = 0;
    int size_y = 0;
    char *file_content = read_file(file_path);
    char **map_bin = convert_to_map(file_content, &size_x, &size_y);
    map_t *map = malloc(sizeof(map_t));

    free(file_content);
    map->size_x = size_x;
    map->size_y = size_y;
    map->map = map_bin;
    return map;
}