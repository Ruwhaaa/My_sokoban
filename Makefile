##
## EPITECH PROJECT, 2017
## File description:
## Makefile
##

SRCC = ./SRC/

SRC	=	$(SRCC)main.c	\
		$(SRCC)my_popup.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm -Llib/my/ -lmy -lncurses

NAME	=	my_popup

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
