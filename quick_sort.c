/*
** quick_sort.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 19:24:41 2011 damien locque
** Last update Tue Sep 13 22:55:39 2011 damien locque
*/

#include "301tri.h"

static int	part(int *tab, int begin, int end)
{
  int decal = begin;
  int pivot = tab[begin];
  for (int i = begin + 1 ; i <= end ; ++i)
    if (tab[i] < pivot)
      my_swap(&tab[++decal], &tab[i]);
  my_swap(&tab[decal], &tab[begin]);
  return (decal);
}


int		*quicksort(int *tab, int begin, int end)
{
  if (begin < end)
    {
      int pivot = part(tab, begin, end);
      quicksort(tab, begin, --pivot);
      quicksort(tab, ++pivot + 1, end);
    }
  return (tab);
}
