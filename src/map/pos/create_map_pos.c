/*
** EPITECH PROJECT, 2020
** create_map_pos
** File description:
** create map for positions
*/

#include "proto.h"

int create_map_pos(game_t *game, char *map_pos)
{
    game->map.buffer_pos = NULL;
    game->map.x_max_pos = 8;
    game->map.y_max_pos = 5;
    int basics = 0;

    if ((basics = basics_actions(game, map_pos)) == 84)
        return (84);
    game->map.map_pos = init_map_pos(game);
    if (checking_letter(game) == true) {
        my_putstr("Position Error\n");
        return (84);
    }
    return (0);
}