##
## Makefile for  in /home/locque_d//rendu/proj/math/301
##
## Made by damien locque
## Login   <locque_d@epitech.net>
##
## Started on  Tue Sep 13 19:01:34 2011 damien locque
## Last update Mon Sep 19 11:49:13 2011 damien locque
##

NAME	= 301tri

SRCS	= tab_func.c		\
	  bubble.c		\
	  quick_sort.c		\
	  selection_sort.c	\
	  insertion_sort.c	\
	  fusion_sort.c		\
	  opt_1.c		\
	  util.c		\
	  main.c

OBJS	= $(SRCS:.c=.o)
CC	= gcc -g3
RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -std=c99

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re	: fclean all
