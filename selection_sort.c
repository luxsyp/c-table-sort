/*
** selection_sort.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 21:56:10 2011 damien locque
** Last update Tue Sep 13 22:11:40 2011 damien locque
*/

#include "301tri.h"

int		*selectionsort(int *tab)
{
  int len = n;
  while (len != 0)
    {
      int max = 0;
      for (int i = 1; i < len; ++i)
	if (tab[i] > tab[max])
	  max = i;
      my_swap(&tab[max], &tab[len-- - 1]);
    }
  return (tab);
}
