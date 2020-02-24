/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "proto.h"

int main(int ac, char **av)
{
    pid_t pid;

    if (ac == 1)
        host();
    else if (ac == 2)
        client_two(av);
    return (0);
}