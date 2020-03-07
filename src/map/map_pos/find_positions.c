/*
** EPITECH PROJECT, 2020
** find_positions.c
** File description:
** find_positions
*/

#include "proto.h"

static int checking_board(game_t *game, int x, int y, int i)
{
    if (CURSOR(y, x) == 'A')
        i = 2;
    if (CURSOR(y, x) == 'B')
        i = 4;
    if (CURSOR(y, x) == 'C')
        i = 6;
    if (CURSOR(y, x) == 'D')
        i = 8;
    if (CURSOR(y, x) == 'E')
        i = 10;
    if (CURSOR(y, x) == 'F')
        i = 12;
    if (CURSOR(y, x) == 'G')
        i = 14;
    if (CURSOR(y, x) == 'H')
        i = 16;
    return (i);
}

bool find_my_position(game_t *game)
{
    NB = 2;
    bool check = false;

    for (int y = 0; y < Y_MAX - 1; y++) {
        for (int x = 0; x < 3; x++) {
            if (game->map.map_pos[y][x] == ':') {
                ++x;
                I = checking_board(game, x, y, I);
                A = checking_board(game, 5, y, I);
                J = game->map.map_pos[y][x + 1] - '0';
                K = game->map.map_pos[y][6] - '0';
                if (J == game->map.map_pos[y][6] - '0')
                    check = x_axes(game, y, check);
                else
                    check = y_axes(game, y, check);
            }
        }
        ++NB;
    }
    return (check);
}