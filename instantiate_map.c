/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** instantiate_map.c
*/

#include <stdio.h>
#include "my_runner.h"

void spawn_ground(sfVector2i position, node_t **object_list)
{
    sfIntRect rect = {0, 0, 16, 16};
    sfVector2f scale = {5, 5};
    sfVector2f pos = {(float)position.x * (float)rect.width * scale.x,
                      (float)position.y * (float)rect.height * scale.y};
    object_t *object = create_object("assets/ground.png",
                                     pos, rect, BLOCK);
    object->scale = scale;
    node_push_back(object_list, object);
}

void instantiate_object(char c, sfVector2i position, node_t **object_list)
{
    switch (c)
    {
        case '.':
            spawn_ground(position, object_list);
            break;
    }
}

void instantiate_map(map_t *map, node_t **object_list)
{
    sfVector2i position;

    for (int y = 0; y < map->size_y; y++) {
        for (int x = 0; x < map->size_x; x++) {
            position.x = x;
            position.y = y;
            instantiate_object(map->map[y][x], position, object_list);
        }
    }
}