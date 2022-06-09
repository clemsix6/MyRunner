/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** destroy_game.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "include/my_runner.h"

void destroy_game(game_t *game)
{
    sfRenderWindow_destroy(game->window);
    sfClock_destroy(game->clock);
    free(game);
}