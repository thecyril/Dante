/*
** generator.c for generator in /home/puccio_c/rendu/Prog_Elem/dante/generator
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Tue May 10 14:44:20 2016 cyril puccio
** Last update Fri May 27 13:57:06 2016 cyril puccio
*/

#include "dante.h"

void		create_lab(t_var *var, int x, int y, int i)
{
  int		**tab;
  int		k;
  int		j;

  k = j = -1;
  tab = xmalloc(sizeof(int*) * y);
  while (++k != y)
    {
      j = -1;
      tab[k] = xmalloc(sizeof(int) * x);
      if (k % 2 == 0)
	while (++j != x)
	  if (j % 2 == 0)
	    tab[k][j] = i++;
	  else
	    tab[k][j] = 0;
      else
	while (++j != x)
	  tab[k][j] = 0;
    }
  if (j == x && k == y)
    tab[k - 1][j - 1] = i - 1;
  if (x % 2 == 0 && y % 2 == 0)
    tab[k - 2][j - 1] = i - 1;
  var->tab = tab;
}

void		replace_last(int **tab, int x, int y)
{
  int		i;

  i = -1;
  while (++i != x)
    tab[y - 1][i] = 1;
  tab[y - 2][x - 1] = 1;
}

void    moove5(int **tab, int randx, int randy, int x, int y)
{
  if (tab[randy][randx] <= tab[randy][randx - 2])
    {
      tab = replace_tab(tab, x, y, tab[randy][randx], tab[randy][randx - 2]);
      tab[randy][randx - 1] = tab[randy][randx];
    }
}

void            my_algo2(int **tab, int x, int y)
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
        moove5(tab, randx, randy, x, y);
      if (rand4 == 2 && randx != x - 2 && randx != x - 1)
        moove2(tab, randx, randy, x, y);
      if (rand4 == 1 && randy != y - 2 && randy != y - 1)
        moove3(tab, randx, randy, x, y);
      if (rand4 == 3 && randy != 0)
        moove4(tab, randx, randy, x, y);
    }
}

int             main(int ac, char **av)
{
  t_var         var;
  int		x;
  int		y;

  if (ac >= 3)
    {
      x = atoi(av[1]);
      y = atoi(av[2]);
      if (((my_isnum_str(av[1]) == 0 || my_isnum_str(av[2])) == 0)
	  || (x < 4 || y < 4))
	return (puts("excepted positive number higher than 4 whith x != y"));
      create_lab(&var, x, y, 1);
      if (x % 2 != 0 && y % 2 != 0)
	my_algo(var.tab, x, y - 1);
      else if ((x % 2 != 0 && y % 2 != 0) && strcmp("imparfait", av[3]))
	my_algo2(var.tab, x, y - 1);
      else
	my_algo(var.tab, x, y);
      (x % 2 != 0 && y % 2 != 0) ? replace_last(var.tab, x, y) : (void)0;
      show_lab(var.tab, x, y);
    }
  else if (ac < 3)
    puts("usage : ./generator x y");
  return (0);
}
