/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** destroy_object.c
*/

#include <stdlib.h>
#include "my_runner.h"

void destroy_object(object_t *object)
{
    sfTexture_destroy(object->texture);
    sfSprite_destroy(object->sprite);
    if (object->animator != NULL)
        free(object->animator);
    free(object);
}