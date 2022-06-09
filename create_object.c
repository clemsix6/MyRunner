/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** create_object.c
*/

#include "my_runner.h"
#include <stdlib.h>

object_t *create_object(const char *path,
                        sfVector2f pos,
                        sfIntRect rect,
                        object_type_t type)
{
    sfVector2f scale = {1, 1};
    object_t *object;
    sfTexture *texture;
    sfSprite *sprite;

    texture = sfTexture_createFromFile(path, NULL);
    if (texture == NULL)
        return NULL;
    sprite = sfSprite_create();
    if (sprite == NULL) {
        sfTexture_destroy(texture);
        return NULL;
    }
    object = malloc(sizeof(object_t));
    sfSprite_setTexture(sprite, texture, sfTrue);
    object->position = pos;
    object->scale = scale;
    object->rect = rect;
    object->texture = texture;
    object->sprite = sprite;
    object->type = type;
    object->animator = NULL;
    return object;
}