/*
** lab.c for lab in /home/puccio_c/rendu/Prog_Elem/dante/profondeur
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat May 21 16:48:38 2016 cyril puccio
** Last update Sun May 22 21:18:39 2016 cyril puccio
*/

#include "my.h"

void	solve_lab(t_map **lab, int y, int x, t_pos max)
{
  lab[y][x].ch = '*';
  lab[y][x].exit = 0;
  if (y != max.y - 1 && lab[y + 1][x].exit == 1 &&
      lab[y + 1][x].ch == 'o' && lab[y + 1][x].visited == 1)
    solve_maze(lab, y + 1, x, max);
  else if (x != max.x - 1 && lab[y][x + 1].exit == 1 &&
	   lab[y][x + 1].ch == 'o' && lab[y][x + 1].visited == 1)
    solve_maze(lab, y, x + 1, max);
  else if (x != 0 && lab[y][x - 1].exit == 1 &&
	   lab[y][x - 1].ch == 'o'  && lab[y][x - 1].visited == 1)
    solve_maze(lab, y, x - 1, max);
  else if (y != 0 && lab[y - 1][x].exit == 1 &&
	   lab[y - 1][x].ch == 'o' && lab[y - 1][x].visited == 1)
    solve_maze(lab, y - 1, x, max);
}
