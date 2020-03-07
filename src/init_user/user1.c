/*
** EPITECH PROJECT, 2020
** user1.c
** File description:
** user1
*/

#include "proto.h"

static int test_usr1(game_t *game)
{
    if (main_game(game) == 84)
        return (84);
    printf("waiting for ennemy's attack\n");
    receive_signal(game);
    display_map(game);
}

int user1(game_t *game)
{
    int user1 = 0;

    if ((user1 = prepare_my_user1(game)) == 84)
        return (84);
    if (create_map_pos(game, game->user.pos) == 84) {
        close(game->map.fd_pos);
        return (84);
    }
    if ((find_my_position(game)) == true)
        return (84);
    pause();
    game->user.pid_user2 = global;
    printf("global = %d\n", global);
    printf("pid2 = %d\n", game->user.pid_user2);
    display_map(game);
    my_putchar('\n');
    while(1) {
        if (test_usr1(game) == 84)
            return (84);
    }
    return (0);
}