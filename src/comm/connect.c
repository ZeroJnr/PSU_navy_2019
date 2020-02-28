/*
** EPITECH PROJECT, 2020
** connect.c
** File description:
** connect
*/

#include "proto.h"

bool glob = true;

void sig_handler(int i, siginfo_t *sig, void *test)
{
    my_putstr("\nenemy connected\n\n");
    glob = false;
}

int user1(game_t *game)
{
    struct sigaction signal;
    signal.sa_handler = &sig_handler;
    sleep(1);
    signal.sa_flags = SA_SIGINFO;
    my_putstr("my_pid:\t");
    my_putstr(show_number(getpid()));
    my_putstr("\nwaiting for enemy connection...\n");
    sigemptyset(&signal.sa_mask);
    sigaction(12, &signal, NULL);
    while(glob != false)
        usleep(5000);
    return (0);
}

int user2(game_t *game, char *pid1)
{
    game->user.pid_ennemy = to_number(pid1);
    my_putstr("my_pid:\t");
    my_putstr(show_number(getpid()));
    my_putchar('\n');
    kill(game->user.pid_ennemy, SIGUSR2);
    my_putstr("\nsuccesfully connected\n");
    return (0);
}