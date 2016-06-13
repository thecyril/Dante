##
## Makefile for Makefile in /home/puccio_c/rendu/Piscine_C_J10/lib/my
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Fri Oct  9 18:40:22 2015 cyril puccio
## Last update Tue May 10 17:14:57 2016 cyril puccio
##

CC	=	gcc

RM	=	rm -f

ECHO	=	/bin/echo -e
DEFAULT	=	"\033[00m"
GREEN	=	"\033[0;32m"
TEAL	=	"\033[1;36m"
RED	=       "\033[0;31m"

AR	=	ar rc

RANLIB	=	ranlib

FLAGS	+=	-Wextra -Wall -Werror -ainsi -pedantic
CFLAGS	+=	-Iinclude

NAME	=	libmy.a

SRCS	=	src/my_putchar.c	\
		src/my_putstr.c		\
		src/my_strlen.c		\
		src/my_strcmp.c		\
		src/my_put_nbr.c	\
		src/my_putnbr_base.c	\
		src/my_str_isprintable.c\
		src/my_strlowcase.c	\
		src/my_printf.c		\
		src/my_getnbr.c		\
		src/fonc.c		\
		src/fonc2.c		\
		src/my_isnum.c		\
		src/my_atof.c		\
		src/my_isneg.c		\
		src/my_puterror.c	\
		src/my_strdup.c		\
		src/my_strcpy.c		\
		src/my_str_isnum.c	\
		src/get_next_line.c	\
		src/my_strncat.c	\
		src/xmalloc.c		\
		src/my_str_to_wordtab.c	\
		src/my_strncmp.c	\
		src/my_strcat.c		\
		src/my_str_isalpha.c	\
		src/my_isnum_str.c	\

OBJS	=	$(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)MY$(DEFAULT)

$(NAME):	$(OBJS)
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

fclean:		clean
		@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
