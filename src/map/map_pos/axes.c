/*
** EPITECH PROJECT, 2020
** axes.c
** File description:
** axes
*/

#include "proto.h"

bool x_axes(game_t *game, int y, bool check)
{
    game->map.map[J + 1][I] = NB + '0';
    while (I <= A) {
        game->map.map[J + 1][I] = NB + '0';
        I += 2;
        ++COUNT1;
    }
    if (COUNT1 != (game->map.map_pos[y][0] - '0'))
        check = true;
    COUNT1 = 0;
    return (check);
}

bool y_axes(game_t *game, int y, bool check)
{
    game->map.map[J + 1][I] = NB + '0';
    while (J <= K) {
        game->map.map[J + 1][I] = NB + '0';
        ++J;
        ++COUNT2;
    }
    if (COUNT2 != (game->map.map_pos[y][0] - '0'))
        check = true;
    COUNT2 = 0;
    return (check);
}
