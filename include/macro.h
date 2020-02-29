/*
** EPITECH PROJECT, 2020
** macro
** File description:
** navy macro
*/

#ifndef MACRO
#define MACRO

#define RAM 2048
#define CHECK game->user.check
#define CURSOR(y, x) game->map.map_pos[y][x]
#define LETTER(i) (i >= 'A' && i <= 'Z')
#define NUMBER(i) (i >= '1' && i <= '9')

#endif
