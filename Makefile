##
## Makefile for Makefile in /home/puccio_c/rendu/Prog_Elem/dante
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Sun May 22 16:43:31 2016 cyril puccio
## Last update Mon Jun 13 18:44:16 2016 cyril puccio
##

CC	=	gcc

NAME	=	solver

all:            $(NAME)

$(NAME):	
		@$(MAKE) -C largeur/ all
		@$(MAKE) -C profondeur/ all

clean:
		@$(MAKE) -C largeur/ clean
		@$(MAKE) -C profondeur/ clean

fclean:		clean
		@$(MAKE) -C largeur/ fclean
		@$(MAKE) -C profondeur/ fclean

re:		fclean all

.PHONY:		all clean fclean re
