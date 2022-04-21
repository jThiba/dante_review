##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c\
		src/file_open.c\
		src/array_struct.c\
		src/solver.c\
		src/lib/my_realloc_memset.c\
		src/initialize_size.c\
		src/lib/array_len.c\
		src/lib/strdup.c\
		src/lib/strlen.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

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
