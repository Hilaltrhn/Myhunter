##
## EPITECH PROJECT, 2024
## B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
## File description:
## Makefile
##

NAME 	= my_hunter

SRC		= src/main.c \
		  src/my_hunter.c \
		  src/window.c \
		  src/gameloop.c \
		  src/handle_h.c \

OBJ		= $(SRC:.c=.o)

CSFML	= -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all : $(NAME)

$(NAME) : $(OBJ)
			gcc $(OBJ) -o $(NAME) -I/includes $(CSFML)

clean :
		rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re :	fclean all
