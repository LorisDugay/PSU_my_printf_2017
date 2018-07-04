##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## made by Loris D
##

SRC	=	lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_put_nbr_base.c	\
		lib/my/my_getnbr.c		\
		lib/my/my_strlen.c		\
		lib/my/my_putstr.c		\
		lib/my/fonct1.c			\
		lib/my/fonct2.c			\
		lib/my/fonct3.c			\
		lib/my/my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
