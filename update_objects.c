/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** update_objects.c
*/

#include "my_runner.h"

void update(object_t *object, game_t *game)
{
    update_background(object);
    update_animation(object, game);
    update_block(object);
}

void update_objects(game_t *game, node_t **object_list)
{
    node_t *loop_node = *object_list;
    object_t *object;

    while (loop_node != NULL) {
        object = (object_t *) loop_node->value;
        update(object, game);
        loop_node = loop_node->next;
    }
}