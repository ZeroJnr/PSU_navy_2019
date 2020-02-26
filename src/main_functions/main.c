/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "proto.h"

int main(int ac, char **av)
{
    game_t game = {0};

    if (ac > 3)
        return (84);
    else if (av[1][0] == '-' && av[1][1] == 'h') {
        helper();
        return (0);
    }
    if (navy(&game, ac, av) == 84)
        return (84);
    return (0);
}