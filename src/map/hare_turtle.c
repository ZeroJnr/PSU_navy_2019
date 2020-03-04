/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** turtle_hare
*/

#include "proto.h"

static bool first_check(game_t *game)
{
    char count;
    int count_sec = 0;
    bool check = false;
    bool final_check = false;

    for (int y = 0; y < game->map.y_max; y++) {
        for (int x = 0; x < game->map.x_max; x++) {
            if (game->map.map[y][x] >= '1' && game->map.map[y][x] <= '9') {
                count = game->map.map[y][x];
                check = true;
                break;
        }
        if (check == true)
            break;
        }
    }
    for (int y = 0 ;y < game->map.y_max; y++) {
        for (int x = 0; x < game->map.x_max; x++) {
            if (game->map.map[y][x] == count)
                count_sec += 1;
        }
    }
    if (count_sec == 0)
        final_check = true;
    return (final_check);
}

int test(game_t *game, int x, char nb, int y)
{
    while (x < nb - '0') {
        game->map.map[y][x] = nb;
        ++x;
    }
    return (x);
}

char **turtle_hare_x(game_t *game)
{
    char nb;
    int x = 2;
    int y = 2;

    for (x = 2; x <= game->map.x_max; x++) {
        if (game->map.map[y][x] > '2' && game->map.map[y][x] <= '5') {
            nb = game->map.map[y][x];
            x = test(game, x, nb, y);
        }
        if (y == game->map.y_max)
            break;
        if (x == game->map.x_max) {
            y += 1;
            x = 1;
        }
    }
    return (game->map.map);
}