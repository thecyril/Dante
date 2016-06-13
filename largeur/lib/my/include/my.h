/*
** my.h for my.h in /home/puccio_c/rendu/Piscine_C_J09/include
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Oct  9 15:26:13 2015 cyril puccio
** Last update Tue May 10 17:15:26 2016 cyril puccio
*/

#ifndef _MY_LIB_
#define _MY_LIB_

#include	<stdarg.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>

typedef struct  s_struct
{
  char          c;
  void          (*ptr)(va_list);
}               t_struct;

void	my_putchar(char c);
void	my_put_nbr(int	nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_str_ispprintable(char *str);
char    *my_strncat(char *dest, char *src, int nb);
char	*my_strlowcase(char *str);
void    my_putnbr_base(int nb, char *base);
int	my_printf(char *str, ...);
void	init(t_struct *ptr);
void	structure(char *str, va_list ap);
void	put_str(va_list list);
void	put_nbr(va_list list);
void	put_char(va_list list);
void	put_base8(va_list list);
void	put_base16(va_list list);
void	put_basemaj16(va_list list);
void	put_base2(va_list);
void	put_unbr(va_list);
void	put_phex(va_list);
double	my_atof(char *str);
char    *get_next_line(const int fd);
int     my_getnbr(const char *str);
char    *my_strdup(char *str);
char	*my_strcpy(char *dest, char *src);
int     my_isnum(char c);
void    *xmalloc(int size);
char	**my_str_to_wordtab(char *str);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strcat(char *dest, char *src);
int     my_str_isalpha(char *str);
int     my_isnum_str(char *str);

#endif
