/*
** EPITECH PROJECT, 2020
** process_info
** File description:
** display process information : process ID, parent process ID and group process ID
*/

#include "proto.h"

void process_info(void)
{
    pid_t pid;
    pid_t ppid;

    pid = getpid();
    printf("PID: %d\n", pid);
    ppid = getppid();
    printf("PPID: %d\n", ppid);
    pid = getpgid(pid);
    printf("PGID: %d\n", pid);
}