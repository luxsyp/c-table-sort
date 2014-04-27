/*
** bubble.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 18:50:37 2011 damien locque
** Last update Tue Sep 13 19:13:01 2011 damien locque
*/

#include <stdbool.h>
#include "301tri.h"

int	*bubble_sort(int *tab)
{
  bool	flag = true;

  while (flag)
    {
      flag = false;
      for (int i = 0 ; i < n - 1 ; ++i)
	if (tab[i] > tab[i + 1] && (flag = true))
	  my_swap(&tab[i], &tab[i + 1]);
    }
  return (tab);
}

