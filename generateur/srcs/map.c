/*
** map.c for map.c in /home/puccio_c/rendu/Prog_Elem/dante/generator/srcs
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon May 16 12:58:34 2016 cyril puccio
** Last update Sun May 29 12:49:18 2016 cyril puccio
*/

# include "dante.h"

void            show_int(int **tab, int x, int y)
{
  int           j;
  int           k;

  k = 0;
  while (k < y)
    {
      j = 0;
      while (j < x)
        {
          printf("%d ", tab[k][j]);
          j++;
        }
      putchar('\n');
      k++;
    }
}

void            show_lab(int **tab, int x, int y)
{
  int           j;
  int           k;

  k = 0;
  while (k < y)
    {
      j = 0;
      while (j < x)
        {
          if (tab[k][j] == 1)
	    putchar('*');
          else
            putchar('X');
          j++;
        }
      k++;
      if (k != y)
	putchar('\n');
    }
}

int             check_map(int **tab, int x, int y)
{
  int           j;
  int           k;

  k = 0;
  while (k < y)
    {
      j = 0;
      while (j < x)
        {
          if ((tab[k][j] != 0 && tab[k][j] != 1))
            return (0);
          j++;
        }
      k++;
    }
  return (1);
}

int             **replace_tab(int **tab, int x, int y, int nb, int nb2)
{
  int           i;
  int           j;

  i = 0;
  j = 0;
  while (i != y)
    {
      j = 0;
      while (j != x)
        {
          if (tab[i][j] == nb2)
            tab[i][j] = nb;
          j++;
        }
      i++;
    }
  return (tab);
}
