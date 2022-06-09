/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** instatiate_player.c
*/

#include "my_runner.h"

void instantiate_player(node_t **object_list)
{
    sfVector2f position = {300, 800};
    sfVector2f scale = {10, 10};
    sfVector2i offset = {36, 1};
    sfVector2i max_pos = {108, 1};
    sfIntRect rect = {0, 0, 36, 26};
    object_t *obj = create_object("assets/ninja.png", position, rect, PLAYER);

    obj->scale = scale;
    add_animator(obj, offset, max_pos, 0.1);
    node_push_back(object_list, obj);
}