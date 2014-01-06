## Makefile for 102chiffrement in /home/mathon_j/rendu/102chiffrement
## 
## Made by Jeremy Mathon
## Login   <mathon_j@epitech.net>
## 
## Started on  Mon Nov 25 15:37:45 2013 Jeremy Mathon
## Last update Sun Jan  5 18:28:27 2014 Jérémy MATHON
##

SRCS=		./src/my_pushswap.c \
		./src/my_putchar.c \
		./src/my_getnbr.c \
		./src/my_put_nbr.c \
		./src/my_strlen.c \
		./src/my_swap.c \
		./src/my_functions.c \
		./src/my_putstr.c

CC=		gcc

NAME=		push_swap

CFLAGS +=	-Wextra -Wall -Werror
CFLAGS +=	-ansi -pedantic
CFLAGS +=	-I.

OBJS=		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -g

clean:
	rm -rvf $(OBJS)

fclean:		clean
	rm -rvf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
