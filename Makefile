##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME = dante

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C solver/
	make -C generator/
	@echo -e "\x1b[32mCompilation Success\e[0m"

clean:
	rm -f $(OBJ)

fclean: clean
	make fclean -C solver/
	make fclean -C generator/
	rm -f $(NAME)	

re:	fclean all

.PHONY: all create clean fclean re
