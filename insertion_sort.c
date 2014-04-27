/*
** insertion_sort.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 22:15:21 2011 damien locque
** Last update Tue Sep 13 22:48:02 2011 damien locque
*/

#include <stdbool.h>
#include "301tri.h"

int		*insertionsort(int *tab)
{
  for (int i = 1; i < n; ++i)
    {
      int tmp = tab[i];
      int decal = i - 1;
      bool flag = true;
      while (flag)
	{
	  flag = false;
	  if (tab[decal] > tmp)
	    {
	      tab[decal + 1] = tab[decal];
	      flag = true;
	      --decal;
	    }
	  if (decal < 0)
	    flag = false;
	}
      tab[decal + 1] = tmp;
    }
  return (tab);
}
