/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** start.c
*/

#include <stdio.h>
#include "my_runner.h"
#include "my_linkedlist.h"

void create_background(node_t **object_list)
{
    sfVector2f pos_0 = {0, 0};
    sfVector2f pos_1 = {1920, 0};
    sfIntRect rect_0 = {0, 0, 1920, 1080};
    sfIntRect rect_1 = {1920, 0, -1920, 1080};
    object_t *bgs[8] = {
        create_object("assets/bg/2.png", pos_0, rect_0, BACKGROUND_0),
        create_object("assets/bg/3.png", pos_0, rect_0, BACKGROUND_1),
        create_object("assets/bg/3.png", pos_1, rect_1, BACKGROUND_1),
        create_object("assets/bg/4.png", pos_0, rect_0, BACKGROUND_2),
        create_object("assets/bg/4.png", pos_1, rect_1, BACKGROUND_2),
        create_object("assets/bg/5.png", pos_0, rect_0, BACKGROUND_3),
        create_object("assets/bg/5.png", pos_1, rect_1, BACKGROUND_3),
        create_object("assets/bg/6.png", pos_0, rect_0, BACKGROUND_0)
    };

    for (int i = 0; i < 8; i++)
        node_push_back(object_list, bgs[i]);
}

void start(game_t *game, node_t **object_list)
{
    map_t *map = load_map("assets/map");

    create_background(object_list);
    instantiate_map(map, object_list);
    instantiate_player(object_list);
}