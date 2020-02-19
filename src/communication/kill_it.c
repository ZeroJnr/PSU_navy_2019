/*
** EPITECH PROJECT, 2020
** kill_it
** File description:
** kill_it
*/

#include "proto.h"

int kill_it(pid_t pid)
{
    kill(pid, SIGQUIT);
    return (0);
}