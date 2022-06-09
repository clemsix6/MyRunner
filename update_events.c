/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** update_events.c
*/

#include <SFML/Audio.h>
#include "my_runner.h"
#include "my_linkedlist.h"

void move_player(node_t **object_list, int y)
{
    node_t *loop_node = *object_list;
    object_t *object;
    sfMusic *music = sfMusic_createFromFile("son.wav");

    sfMusic_play(music);
    while (loop_node != NULL) {
        object = (object_t *) loop_node->value;
        if (object->type == PLAYER) {
            object->position.y += y;
            return;
        }
        loop_node = loop_node->next;
    }
}

void process_event(game_t *game, __attribute__((unused)) node_t **object_list, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    else if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyUp)
            move_player(object_list, -10);
        else if (event.key.code == sfKeyDown)
            move_player(object_list, 10);
        else if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(game->window);
    }
}

void update_events(game_t *game, node_t **object_list)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        process_event(game, object_list, event);
    }
}