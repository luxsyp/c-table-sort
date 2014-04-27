/*
** tab_func.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 18:53:44 2011 damien locque
** Last update Tue Sep 13 23:28:24 2011 damien locque
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "301tri.h"

int		*create_tab(int size)
{
  int		*tab;

  tab = malloc(size * sizeof(*tab));
  if (!tab)
    {
      fprintf(stderr, "Malloc fail!");
      exit(EXIT_FAILURE);
    }
  return (tab);
}

void		fill_tab(int **tab)
{
  for (int i = 0 ; i < n; ++i)
    (*tab)[i] = (rand() % MAXVAL + 1);
}

void		aff_tab(int *tab)
{
  for (int i = 0 ; i < n; ++i)
    printf("%d%s", tab[i], ((i == n -1) ? "" : " - "));
  printf("\n");
}
