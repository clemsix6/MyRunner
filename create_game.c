/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** create_game.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "include/my_runner.h"

game_t *create_game(unsigned int width, unsigned int height)
{
    sfVideoMode mode = {width, height, 32};
    sfRenderWindow *win;
    game_t *game = malloc(sizeof(game_t));

    win = sfRenderWindow_create(mode, "MyRunner", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win, 60);
    game->window = win;
    game->clear_color = sfBlack;
    game->clock = sfClock_create();
    return game;
}