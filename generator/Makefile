##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c\
		src/perfect.c\
		src/imperfect.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS		+= -Wall -Wextra -g

CPPFLAGS	=	-I ../include/ -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *gcda
	rm -f *gcno
	rm -f unit_tests
	rm -f *~*

re:	fclean all

.PHONY: all create clean fclean re
