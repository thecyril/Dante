/*
** xfonc.c for xfonc in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/srcs
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Mar 31 14:41:55 2016 cyril puccio
** Last update Sun May 22 15:58:29 2016 cyril puccio
*/

#include "dante.h"

int     xread(int fd, char *buffer, int size)
{
  int   ret;

  ret = read(fd, buffer, size);
  if (buffer == NULL)
    {
      puts("[Error] Can't read");
      exit(EXIT_FAILURE);
    }
  return (ret);
}

void    *xmalloc(int size)
{
  void  *s;

  if ((s = malloc(size)) == NULL)
    {
      puts("[Error] Can't alloc");
      exit(EXIT_FAILURE);
    }
  return (s);
}

int     my_isnum_str(char *str)
{
  int   i;

  i = 0;
  i = (str[0] == '-');
  while (str[i])
    {
      if ('0' > str[i] || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
