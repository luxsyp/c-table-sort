/*
** util.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 19:03:16 2011 damien locque
** Last update Tue Sep 13 19:05:44 2011 damien locque
*/

#include "301tri.h"

void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp= *a;
  *a = *b;
  *b = tmp;
}
