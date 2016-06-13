/*
** dante.h for dante in /home/puccio_c/rendu/Prog_Elem/dante/generator
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue May 10 17:06:52 2016 cyril puccio
** Last update Fri May 27 13:51:35 2016 cyril puccio
*/

#ifndef _ASM_H
#define _ASM_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>

typedef struct  s_var
{
  int	**tab;
  char  **map;
}               t_var;

/* ------- list ------- */

typedef struct s_list
{
  char          *str;
  int           first;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

t_list  *add_end(t_list *list, char *arg);
t_list  *del_inlist(t_list *list);
void	aff_list(t_list *list);
int     len_of_list(t_list *list);
t_list  *put_in_list(t_list *list, char **env);
void	moove1(int **tab, int randx, int randy, int x, int y);
int     **replace_tab(int **tab, int x, int y, int nb, int nb2);
void    moove2(int **tab, int randx, int randy, int x, int y);
void    moove3(int **tab, int randx, int randy, int x, int y);
void    moove4(int **tab, int randx, int randy, int x, int y);
void    my_algo(int **tab, int x, int y);
int     check_map(int **tab, int x, int y);
void    show_lab(int **tab, int x, int y);
void    *xmalloc(int size);
int     my_isnum_str(char *str);
void    replace_last(int **tab, int x, int y);

#endif
