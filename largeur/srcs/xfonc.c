/*
** xfonc.c for xfonc in /home/puccio_c/rendu/minishell/PSU_2015_minishell2/srcs
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Thu Mar 31 14:41:55 2016 cyril puccio
** Last update Wed May  4 14:13:52 2016 cyril puccio
*/

#include "dante.h"

int     xread(int fd, char *buffer, int size)
{
  int   ret;

  ret = read(fd, buffer, size);
  if (buffer == NULL)
    {
      my_putstr("[Error] Can't read");
      exit(EXIT_FAILURE);
    }
  return (ret);
}
