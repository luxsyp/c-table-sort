/*
** main.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 18:35:57 2011 damien locque
** Last update Mon Sep 19 11:50:30 2011 damien locque
*/

#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "301tri.h"

int		main(int argc, char **argv)
{
  srand(time(0) + getpid());
  if (argc == 2 && argv[1][0] == '1')
    aff_opt_1();
  return (0);
}
