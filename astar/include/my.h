/*
** my.h for my.h in /home/puccio_c/rendu/Prog_Elem/dante
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat May 21 17:27:13 2016 cyril puccio
** Last update Sun May 22 21:11:39 2016 cyril puccio
*/

#ifndef _MY_H_
# define _MY_H_

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef	struct	s_pos
{
  int		y;
  int		x;
}		t_pos;

typedef struct	s_map
{
  char		ch;
  int		visited;
  int		exit;
}		t_map;

/* functions.c */

int	my_strlen(char *str);
int	xread(int fd, char *str, int size);
char	*my_realloc(char *str, int lenght);
void	my_putstr(char *str, int fd);
char	*my_strcat(char *dest, char *src);
void	moove_horiz(t_map **maze, int y, int x, t_pos max);
void    moove_ver(t_map **maze, int y, int x, t_pos max);
void      moove_ver(t_map **maze, int y, int x, t_pos max);
void   solve_maze(t_map **maze, int y, int x, t_pos max);
void   solve_lab(t_map **maze, int y, int x, t_pos max);
char	*get_next_line(int fd);

#endif
