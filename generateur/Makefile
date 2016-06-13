##
## Makefile for makefile in /home/puccio_c/rendu/Prog_Elem/dante/generator
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Tue May 10 14:56:09 2016 cyril puccio
## Last update Fri May 27 12:42:46 2016 cyril puccio
##

NAME		=	generateur

FLAGS		=	-W -Wall -Werror -ansi -pedantic	\

CFLAGS		=	-I include

SRC		=	srcs/generator.c	\
			srcs/moove.c		\
			srcs/xfonc.c		\
			srcs/map.c		\

OBJ		=	$(SRC:.c=.o)

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			gcc $(SRC) $(CFLAGS) $(FLAGS) -o $(NAME)

clean		:
			rm -f $(OBJ)

fclean		:
			rm -f $(OBJ)
			rm -f $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
