/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** main
*/

#include <stdlib.h>
#include "my_runner.h"
#include "my_linkedlist.h"
#include "my.h"

void destroy_objects(node_t **object_list)
{
    node_t *loop_node = *object_list;
    node_t *next;

    while (loop_node != NULL) {
        destroy_object((object_t *) loop_node->value);
        next = loop_node->next;
        free(loop_node);
        loop_node = next;
    }
}

void game_loop(game_t *game, node_t **object_list)
{
    sfTime time;

    while (sfRenderWindow_isOpen(game->window)) {
        time = sfClock_getElapsedTime(game->clock);
        sfClock_restart(game->clock);
        game->delta_time = (double)time.microseconds / 1000000.0;
        game->time += game->delta_time;
        update_events(game, object_list);
        update_render(game, object_list);
        update_objects(game, object_list);
    }
}

void help()
{
    my_putstr("CONTROLS:\n"
              "\tup arrow -> up\n"
              "\tdown arrow -> down\n"
              "MAP:\n"
              "\tlocated in 'map' file\n"
              "\t '.' = block; ' ' = void, 'F' = end of file\n");
}

int main(int ac, char **av)
{
    if (ac != 1) {
        if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
            help();
            return 0;
        }
        return 84;
    }

    game_t *game = create_game(1920, 1080);
    node_t *null_node = NULL;
    node_t **object_list = &null_node;

    start(game, object_list);
    game_loop(game, object_list);
    destroy_objects(object_list);
    destroy_game(game);
    return 0;
}
