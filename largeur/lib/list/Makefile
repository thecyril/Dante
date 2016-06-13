##
## Makefile for puccio_c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Fri Mar 25 10:40:38 2016 cyril puccio
## Last update Fri Mar 25 10:40:43 2016 cyril puccio
##

CC      =       gcc

RM      =       rm -f

ECHO    =       /bin/echo -e
DEFAULT =       "\033[00m"
GREEN   =       "\033[0;32m"
TEAL    =       "\033[1;36m"
RED     =       "\033[0;31m"

AR      =       ar rc

RANLIB  =       ranlib

CFLAGS  +=      -Wextra -Wall -Werror
CFLAGS  +=      -ansi -pedantic
CFLAGS  +=      -I./include

NAME	=       liblist.a

SRCS	+=	sources/add_beg.c\
		sources/add_end.c\
		sources/del_list.c\
		sources/rev_list.c\
		sources/add_at_pos.c\
		sources/del_by_pos.c\
		sources/print_list.c\
		sources/len_of_list.c\
		sources/create_list.c\
		sources/create_node.c\
		sources/del_all_by_data.c\
		sources/del_first_by_data.c\
		sources/search_all_by_data.c\
		sources/search_first_by_data.c\

OBJS    =       $(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)LIST$(DEFAULT)

$(NAME):        $(OBJS)
		@$(AR) $(NAME) $(OBJS) && \
                 $(ECHO) "  ▼" && \
                 $(ECHO) $(GREEN)  "[AR]" $(TEAL) $(NAME) $(DEFAULT) || \
                 $(ECHO) $(RED)  "[XX]" $(TEAL) $(NAME)
		@$(RANLIB) $(NAME)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@ && \
                 $(ECHO) "  ├─►" $(GREEN)   "[OK]" $(TEAL) $< $(DEFAULT) || \
                 $(ECHO) $(RED)   "[XX]" $(TEAL) $< $(DEFAULT)


clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
