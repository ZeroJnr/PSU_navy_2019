/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <signal.h> 
#include <sys/types.h> 
#include "proto.h"

int GLOB = 0;

static void signal_handler(int signo, int signo_sec)
{
  static int var1 = 0;

  printf("Received: signal %d\n", signo);
  printf("Received: signal %d\n", signo_sec);
  if (signo == 10)
    GLOB += 1;
  else
    var1 += 1;
  printf(" usr1 = %d", GLOB);
  printf("usr2 = %d", var1);
} 
 
int main(int argc, char**argv) 
{
    struct sigaction s = {0};
    int signo = 10;
    int signo_sec = 12;

    s.sa_handler = signal_handler;
    sigaction(signo, &s, NULL);
    sigaction(signo_sec, &s, NULL);
    printf("My PID is %d\n", getpid());
    while(1)
        sleep(1);
    return (0);
} 