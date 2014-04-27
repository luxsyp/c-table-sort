/*
** opt_1.c for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 23:44:58 2011 damien locque
** Last update Mon Sep 19 11:48:59 2011 damien locque
*/

#include <stdio.h>
#include <stdlib.h>
#include "301tri.h"

void		aff_opt_1(void)
{
      int	*tab;

      tab = create_tab(n);
      fill_tab(&tab);
      printf("\n%s - Tableau Initial :\n%s\t", COLOR, NONE);
      aff_tab(tab);
      printf("%s - Tri rapide :\n%s\t", COLOR, NONE);
      aff_tab(quicksort(tab, 0, n));
      printf("\n");
      free(tab);

      tab = create_tab(n);
      fill_tab(&tab);
      printf("%s - Tableau Initial :\n%s\t", COLOR, NONE);
      aff_tab(tab);
      printf("%s - Tri par fusion :\n%s\t", COLOR, NONE);
      aff_tab(fusionsort(tab, 0, n));
      printf("\n");
      free(tab);

      tab = create_tab(n);
      fill_tab(&tab);
      printf("%s - Tableau Initial :\n%s\t", COLOR, NONE);
      aff_tab(tab);
      printf("%s - Tri bulle :\n%s\t", COLOR, NONE);
      aff_tab(bubble_sort(tab));
      printf("\n");
      free(tab);

      tab = create_tab(n);
      fill_tab(&tab);
      printf("%s - Tableau Initial :\n%s\t", COLOR, NONE);
      aff_tab(tab);
      printf("%s - Tri selection :\n%s\t", COLOR, NONE);
      aff_tab(selectionsort(tab));
      printf("\n");
      free(tab);

      tab = create_tab(n);
      fill_tab(&tab);
      printf("%s - Tableau Initial :\n%s\t", COLOR, NONE);
      aff_tab(tab);
      printf("%s - Tri insertion :\n%s\t", COLOR, NONE);
      aff_tab(insertionsort(tab));
      printf("\n");
      free(tab);
}
