/*
** EPITECH PROJECT, 2020
** getstat.c
** File description:
** getstats
*/

#include "proto.h"

int getstat(char const *filepath)
{
    struct stat buf = {0};

    stat(filepath, &buf);
    return (buf.st_size);
}