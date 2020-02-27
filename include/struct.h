/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_NAVY
#define STRUCT_NAVY

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct user user_t;
typedef struct game game_t;
typedef struct map map_t;

struct user
{
    int pid_ennemy;
    char *pos1;
    char *pos2;
};

struct map
{
    char **map;
    int x_max;
    int y_max;
    int fd;
    int size;
    int len;
    char *buffer;
};

struct game
{
    user_t user;
    map_t map;
};

#endif