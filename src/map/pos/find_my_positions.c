/*
** EPITECH PROJECT, 2020
** find_my_position
** File description:
** find position of my_boat
*/

#include "proto.h"

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