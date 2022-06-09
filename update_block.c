/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** update_block.c
*/

#include <my_runner.h>

void update_block(object_t *object)
{
    if (object->type == BLOCK)
        object->position.x -= 10;
}