/*
** functions.c for func in /home/puccio_c/rendu/Prog_Elem/profondeur/src/utils
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed May 18 13:36:20 2016 cyril puccio
** Last update Sun May 22 18:54:02 2016 cyril puccio
*/

#include "my.h"

int	xread(int fd, char *str, int size)
{
  int	i;

  i = 0;
  if ((i = read(fd, str, size)) != -1)
    return (i);
  else
    return (0);
}

char	*my_realloc(char *str, int lenght)
{
  char	*str2;
  int	i;

  i = -1;
  str2 = str;
  if ((str = malloc(sizeof(int) * lenght)) == NULL)
    return (NULL);
  while (str2[++i] != '\0')
    str[i] = str2[i];
  str[i] = '\0';
  free(str2);
  return (str);
}

void	my_putstr(char *str, int fd)
{
  while (*str)
    write(fd, str++, 1);
  if (fd == 2)
    exit(EXIT_FAILURE);
}

void    *xmalloc(int size)
{
  void  *s;

  if ((s = malloc(size)) == NULL)
    {
      my_putstr("[Error] Can't alloc", 2);
      exit(EXIT_FAILURE);
    }
  return (s);
}

char	*my_strcat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	j;

  i = -1;
  j = -1;
  str = xmalloc(sizeof(char) *	(strlen(dest) + strlen(src) + 1));
  while (src[++i])
    str[i] = src[i];
  while (dest[++j])
    str[i++] = dest[j];
  str[i] = '\0';
  return (str);
}
