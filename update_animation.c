/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** update_animation.c
*/

#include <stdlib.h>
#include "component.h"
#include "my_runner.h"

void update_animation(object_t *object, game_t *game)
{
    struct animator_s *animator = object->animator;

    if (animator == NULL || animator->next_update_time > game->time)
        return;
    animator->current_pos_x += animator->offset_x;
    if (animator->current_pos_x >= animator->max_pos_x) {
        animator->current_pos_x = 0;
        animator->current_pos_y += animator->offset_y;
        if (animator->current_pos_y >= animator->max_pos_y)
            animator->current_pos_y = 0;
    }
    object->rect.left = animator->current_pos_x;
    object->rect.top = animator->current_pos_y;
    animator->next_update_time += animator->update_time_interval;
}