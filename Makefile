##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	prov.c			\
		move.c			\
		move_box.c		\
		get_pos.c		\
		readfile.c		\
		check.c			\
		my_strlen.c		\
		map2.c			\
		finish_sokoban.c	\
		my_strdup.c		\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -g -g3 -ggdb

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -lncurses -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	rm -f *# *~ $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
