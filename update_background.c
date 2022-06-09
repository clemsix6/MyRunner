/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** update_background.c
*/

#include <stdio.h>
#include "my_runner.h"
#include "my_linkedlist.h"

void move_background(object_t *background)
{
    float inc = 0;

    if (background->type == BACKGROUND_1)
        inc = 10;
    else if (background->type == BACKGROUND_2)
        inc = 20;
    else if (background->type == BACKGROUND_3)
        inc = 30;
    background->position.x -= inc / 2;
    if (background->position.x <= -1920)
        background->position.x = 1920;
}

void update_background(object_t *object)
{
    if (object->type < 4)
        move_background(object);
}