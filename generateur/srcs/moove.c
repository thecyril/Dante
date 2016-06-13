/*
** moove.c for moove in /home/puccio_c/rendu/Prog_Elem/dante/generator
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Mon May 16 12:43:22 2016 cyril puccio
** Last update Fri May 27 13:59:34 2016 cyril puccio
*/

#include "dante.h"

void	moove1(int **tab, int randx, int randy, int x, int y)
{
  if (tab[randy][randx] < tab[randy][randx - 2])
    {
      tab = replace_tab(tab, x, y, tab[randy][randx], tab[randy][randx - 2]);
      tab[randy][randx - 1] = tab[randy][randx];
    }
}

void	moove2(int **tab, int randx, int randy, int x, int y)
{
    if (tab[randy][randx] < tab[randy][randx + 2])
    {
      tab = replace_tab(tab, x, y, tab[randy][randx], tab[randy][randx + 2]);
      tab[randy][randx + 1] = tab[randy][randx];
    }
}

void    moove3(int **tab, int randx, int randy, int x, int y)
{
  if (tab[randy][randx] < tab[randy + 2][randx])
    {
      tab = replace_tab(tab, x, y, tab[randy][randx], tab[randy + 2][randx]);
      tab[randy + 1][randx] = tab[randy][randx];
    }
}

void	moove4(int **tab, int randx, int randy, int x, int y)
{
  if (tab[randy][randx] < tab[randy - 2][randx])
    {
      tab = replace_tab(tab, x, y, tab[randy][randx], tab[randy - 2][randx]);
      tab[randy - 1][randx] = tab[randy][randx];
    }
}

void            my_algo(int **tab, int x, int y)
{
  int                   randx;
  int                   randy;
  int                   rand4;

  srand(time(NULL));
  while (check_map(tab, x, y) == 0)
    {
      randx = rand() % (x / 2) * 2;
      randy = rand() % (y / 2) * 2;
      rand4 = rand() % 4;
      if ((x % 2) != 0 && (y % 2) != 0)
        {
          tab[x - 2][y - 1] = tab[x - 3][y - 1];
          tab[x - 1][y - 1] = tab[x - 3][y - 1];
        }
      if (rand4 == 0 && randx != 0)
        moove1(tab, randx, randy, x, y);
      if (rand4 == 2 && randx != x - 2 && randx != x - 1)
        moove2(tab, randx, randy, x, y);
      if (rand4 == 1 && randy != y - 2 && randy != y - 1)
        moove3(tab, randx, randy, x, y);
      if (rand4 == 3 && randy != 0)
        moove4(tab, randx, randy, x, y);
    }
}
