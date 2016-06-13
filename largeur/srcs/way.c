/*
** way.c for way in /home/puccio_c/rendu/Prog_Elem/dante/largeur/srcs
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sun May 22 15:45:04 2016 cyril puccio
** Last update Fri May 27 15:00:59 2016 cyril puccio
*/

# include "dante.h"

t_list          *find_way(char **map, int x, int y, t_list *list)
{
  while (list->x != x - 1 || list->y != y - 1)
    {
      if (list->x != x - 1)
	{
	  if (map[list->y][list->x + 1] != '\0' && map[list->y][list->x + 1] != 'X'
	      && is_in_list(list, list->x + 1, list->y) == 0 && list->x + 1 != x)
	    add_end(list, list->x + 1, list->y, list->x, list->y);
	  if (list->x != 0 && map[list->y][list->x - 1] != 'X'
	      && map[list->y][list->x - 1] != '\0'
	      && is_in_list(list, list->x - 1, list->y) == 0)
	    add_end(list, list->x - 1, list->y, list->x, list->y);
	}
      if (list->y != y - 1)
	{
	  if (map[list->y + 1][list->x] != 'X' && map[list->y + 1][list->x] != '\0'
		&& is_in_list(list, list->x, list->y + 1) == 0  && list->y + 1 != y)
	    add_end(list, list->x, list->y + 1, list->x, list->y);
	  if (list->y != 0 && map[list->y - 1][list->x] != 'X'
	      && map[list->y - 1][list->x] != '\0'
	      && is_in_list(list, list->x, list->y - 1) == 0)
	    add_end(list, list->x, list->y - 1, list->x, list->y);
	  }
      list = list->next;
    }
  return (list);
}

void            aff_way(char **map, t_list *list)
{
  int           px;
  int           py;

  while (list->x != 0 || list->y != 0)
    {
      px = list->px;
      py = list->py;
      map[list->y][list->x] = 'o';
      if (list->prev != NULL)
        list = list->prev;
      while (px != list->x || py != list->y)
        list = list->prev;
    }
  map[list->y][list->x] = 'o';
}
