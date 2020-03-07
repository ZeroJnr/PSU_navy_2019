/*
** EPITECH PROJECT, 2020
** display_map_sec.c
** File description:
** display_map_sec
*/

#include "proto.h"

void display_map_sec(game_t *game)
{
    int x;
    int y;

    for (y = 0; y < game->map.y_max; y++) {
        for (x = 0; x < game->map.x_max; x++)
            my_putchar(game->map.map[y][x]);
        my_putchar('\n');
    }
    my_putchar('\n');
}