/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** add_animator.c
*/

#include <stdlib.h>
#include "my_runner.h"
#include "my_linkedlist.h"

void add_animator(object_t *obj,
                  sfVector2i offset,
                  sfVector2i max_pos,
                  double update_interval)
{
    struct animator_s *animator = malloc(sizeof(struct animator_s));

    animator->offset_x = offset.x;
    animator->offset_y = offset.y;
    animator->max_pos_x = max_pos.x;
    animator->max_pos_y = max_pos.y;
    animator->current_pos_x = 0;
    animator->current_pos_y = 0;
    animator->update_time_interval = update_interval;
    animator->next_update_time = update_interval;
    obj->animator = animator;
}