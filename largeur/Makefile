##
## Makefile for Makefile in /home/puccio_c/rendu/minishell/PSU_2015_minishell2
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Wed Apr 27 15:08:41 2016 cyril puccio
## Last update Wed Jun  1 15:34:23 2016 cyril puccio
##

CC	=	gcc

RM	=	rm -rf

ECHO    =       /bin/echo -e
DEFAULT =       "\033[00m"
GREEN   =       "\033[0;32m"
TEAL    =       "\033[1;36m"
RED     =       "\033[0;31m"

CFLAGS	+=	-Werror -Wextra -Wall -ansi -pedantic
CFLAGS  +=      -lmy -Llib/my -llist -Llib/list
CFLAGS	+=	-Iinclude

NAME	=	solver

SRC	=	srcs/main.c	\
		srcs/xfonc.c	\
		srcs/list.c	\
		srcs/way.c	\

OBJS	=	$(SRC:.c=.o)

all:            title $(NAME)

title:
		@$(ECHO) $(RED)COMPI$(DEFAULT)-$(TEAL)LATIOOON$(DEFAULT)
		@$(ECHO)

$(NAME):	$(OBJS)
		@$(MAKE) -C lib/my/ all
		@$(MAKE) -C lib/list/ all
		@$(CC) -g $(OBJS) -o $(NAME) $(CFLAGS) && \
		$(ECHO) && \
		$(ECHO) $(GREEN)"[EX]" $(TEAL) $(NAME) $(DEFAULT) || \
		$(ECHO) $(RED)"[XX]" $(TEAL) $(NAME) $(DEFAULT)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@ && \
		$(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) || \
		$(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

clean:
		$(RM) $(OBJS)
		@$(ECHO) $(RED)CLEAN$(DEFAULT)
		@$(MAKE) -C lib/my/ clean
		@$(MAKE) -C lib/list/ clean


fclean:		clean
		@$(RM) $(NAME)
		@$(ECHO) $(RED)FCLEAN$(DEFAULT)
		@$(MAKE) -C lib/my/ fclean
		@$(MAKE) -C lib/list/ fclean

re:		fclean all

.PHONY:		all clean fclean re
