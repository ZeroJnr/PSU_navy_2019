/*
** EPITECH PROJECT, 2020
** signal checking.c
** File description:
** signal_checking_sec
*/

#include "proto.h"

int signal_checking_sec(game_t *game, char buffer, char buffer_sec)
{
    int crypt = 0;
    int crypt_sec = 0;
    int lines = 0;
    int colms = 0;

    crypt = before_check_sec(buffer, crypt);
    crypt_sec = buffer_sec - '0';

    usleep(10000);
    while (lines < crypt) { // horizontal
        kill(game->user.pid_user1, SIGUSR1);
        lines++;
        usleep(10000);
    }
    kill(game->user.pid_user1, SIGUSR2); // separation
    usleep(10000);
    while (colms < crypt_sec) { // vertical
        kill(game->user.pid_user1, SIGUSR1);
        colms++;
        usleep(10000);
    }
    kill(game->user.pid_user1, SIGUSR2); // final
    return (0);
}
