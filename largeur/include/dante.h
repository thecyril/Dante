/*
** dante.h for include in /home/puccio_c/rendu/Prog_Elem/dante
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue May 17 13:03:22 2016 cyril puccio
** Last update Sun May 22 19:33:37 2016 cyril puccio
*/

#ifndef _ASM_H
# define _ASM_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include "../lib/my/include/my.h"

typedef struct  s_var
{
  char  *str;
  char  **map;
  char  **savemap;
}               t_var;

/* ------- list ------- */

typedef struct s_list
{
  int		x;
  int		y;
  int		px;
  int		py;
  int           first;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

t_list  *add_end(t_list *list, int x, int y, int px, int py);
t_list  *del_inlist(t_list *list);
void	aff_list(t_list *list);
int     len_of_list(t_list *list);
t_list  *put_in_list(t_list *list, char **env);
int     is_in_list(t_list *list, int x, int y);
t_list  *find_way(char **map, int x, int y, t_list *list);
void    aff_way(char **map, t_list *list);
void    free_list(t_list *list);

#endif
