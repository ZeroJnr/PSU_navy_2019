/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** receive signal
*/

#include "proto.h"

void sig_handler_sec(int i, siginfo_t *sig, void *test)
{
    global++;
}

int receive_signal(game_t *game)
{
    int lines = 0;
    int cols = 0;
    int count2 = 0;
    int recept = 0;
    global = 0;

    struct sigaction signal;
    printf("ok");
    while ((recept = pause()) != SIGUSR2) {
        printf("recept = %d", recept);
        signal.sa_handler = &sig_handler_sec;
        sigaction(10, &signal, NULL);
        signal.sa_flags = SA_SIGINFO;
    }
    lines = global;
    if (recept == SIGUSR2) {
        global = 0;
        count2++;
        signal.sa_handler = &sig_handler_sec;
    }
    cols = global;
    printf("lines = %d, cols %d", lines, cols);
    return (0);
}