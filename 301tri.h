/*
** 301tri.h for  in /home/locque_d//rendu/proj/math/301
**
** Made by damien locque
** Login   <locque_d@epitech.net>
**
** Started on  Tue Sep 13 18:36:37 2011 damien locque
** Last update Tue Sep 13 23:49:47 2011 damien locque
*/

#ifndef _301TRI_H_
#define _301TRI_H_

#define n 15
#define MAXVAL 1000

#define COLOR "\033[34m"
#define NONE "\033[00m"

/* util.c */
void	my_swap(int *a, int *b);

/* tab_func.c */
int		*create_tab(int size);
void		fill_tab(int **tab);
void		aff_tab(int *tab);

/* bubble.c */
int		*bubble_sort(int *tab);

/* quick_sort.c */
int		*quicksort(int *tab, int begin, int end);

/* selection_sort.c */
int		*selectionsort(int *tab);

/* insertion_sort.c */
int		*insertionsort(int *tab);

/* fusion_sort.c */
int		*fusionsort(int *tab, int begin, int end);

#endif /* !_301TRI_H_ */
