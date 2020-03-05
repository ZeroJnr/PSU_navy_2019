/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** basic ations
*/

#include "proto.h"

int basics_actions(game_t *game, char *map_pos)
{
    if ((game->map.size_pos = getstat(map_pos)) <= 0) {
        my_putstr("getstat failed\n");
        return (84);
    }
    else if (!(game->map.buffer_pos = malloc(sizeof(char) *
    (game->map.size_pos))))
        return (84);
    if ((game->map.fd_pos = open(map_pos, O_RDONLY)) <= 0) {
        my_putstr("open failed\n");
        return (84);
    }
    else if ((game->map.len_pos = read(game->map.fd_pos,
    game->map.buffer_pos, game->map.size_pos)) <= 0) {
        my_putstr("read failed\n");
        return (84);
    }
    return (0);
}