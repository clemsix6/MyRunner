/*
** EPITECH PROJECT, 2021
** MyHunter
** File description:
** my_runner.h
*/

#ifndef MYHUNTER_MY_RUNNER_H
#define MYHUNTER_MY_RUNNER_H

#include <SFML/Graphics.h>
#include "my_linkedlist.h"
#include "component.h"

typedef enum object_type_e {
    BACKGROUND_0,
    BACKGROUND_1,
    BACKGROUND_2,
    BACKGROUND_3,
    ENTITY,
    BLOCK,
    PLAYER
} object_type_t;

typedef struct map_s {
    int size_x;
    int size_y;
    char **map;
} map_t;

typedef struct game_s {
    sfRenderWindow *window;
    sfColor clear_color;
    sfClock *clock;
    double time;
    double delta_time;
} game_t;

typedef struct object_s {
    sfVector2f position;
    sfVector2f scale;
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
    object_type_t type;
    struct animator_s *animator;
} object_t;

void start(game_t *game, node_t **object_list);
void update_render(game_t *game, node_t **object_list);
void update_events(game_t *game, node_t **object_list);
void update_background(object_t *object);
game_t *create_game(unsigned int width, unsigned int height);
void destroy_game(game_t *game);
object_t *create_object(const char *path,
                        sfVector2f pos,
                        sfIntRect rect,
                        object_type_t type);
void destroy_object(object_t *object);
void update_objects(game_t *game, node_t **object_list);
void update_block(object_t *object);
void update_animation(object_t *object, game_t *game);
void add_animator(object_t *obj,
                  sfVector2i offset,
                  sfVector2i max_pos,
                  double update_interval);
char *read_file(char const *filepath);
char **convert_to_map(char const *file_map, int *size_x, int *size_y);
map_t *load_map(char const *file_path);
void instantiate_map(map_t *map, node_t **object_list);
void instantiate_player(node_t **object_list);

#endif //MYHUNTER_MY_RUNNER_H
