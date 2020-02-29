/*
** EPITECH PROJECT, 2020
** create_map_pos
** File description:
** create map for positions
*/

#include "proto.h"

static int basics_actions(game_t *game)
{
    if ((game->map.size_pos = getstat("pos1")) <= 0) {
        my_putstr("getstat failed\n");
        return (84);
    }
    else if (!(game->map.buffer_pos = malloc(sizeof(char) *
    (game->map.size_pos))))
        return (84);
    if ((game->map.fd_pos = open("pos1", O_RDONLY)) <= 0) {
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

int create_map_pos(game_t *game)
{
    game->map.buffer_pos = NULL;
    game->map.x_max_pos = 8;
    game->map.y_max_pos = 4;
    int basics = 0;

    if ((basics = basics_actions(game)) == 84)
        return (84);
    game->map.map_pos = init_map_pos(game);
    if (checking_letter(game) == true) {
        my_putstr("Position Error\n");
        return (84);
    }
    return (0);
}