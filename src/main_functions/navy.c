/*
** EPITECH PROJECT, 2020
** navy.c
** File description:
** navy
*/

#include "proto.h"

int navy(game_t *game, int ac, char **av)
{
    /*if (ac == 1)
        user1(game);
    else if (ac == 2)
        user2(game, av[1]);*/
    if (create_map(game) == 84)
        return (84);
    return (0);
}