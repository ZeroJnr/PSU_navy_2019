/*
** EPITECH PROJECT, 2020
** init_com.c
** File description:
** init_com
*/

#include "proto.h"

void signal_handler(pid_t pid2)
{
    my_putstr("enemy connected\n");
    kill(pid2, SIGUSR2);
}

void signal_usr2()
{
    my_putstr("successfully connected\n");
}

int host()
{
    pid_t pid;
    struct sigaction s = {0};

    pid = getpid();
    my_putstr("my_pid:\t");
    show_number(pid);
    my_putstr("\nwaiting for enemy connection...\n\n");
    s.sa_handler = signal_handler;
    sigaction(SIGUSR2, &s, NULL);
    while (1)
        usleep(2000000);
    return (0);
}

int client_two(char **av)
{
    pid_t pid2;
    pid_t pid;
    struct sigaction s;

    pid2 = getpid();
    my_putstr("my_pid:\t");
    show_number(pid2);
    pid = to_number(av[1]);
    kill(pid, SIGUSR2);
    s.sa_handler = signal_usr2;
    sigaction(SIGUSR2, &s, NULL);
    while (1)
        sleep(2);
    return (0);
}