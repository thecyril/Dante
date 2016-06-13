/*
** main.c for main in /home/puccio_c/rendu/Prog_Elem/dante
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat May 21 17:25:50 2016 cyril puccio
** Last update Sun May 22 21:31:48 2016 cyril puccio
*/

#include "my.h"

void	display_maze(t_map **maze, int lines, int letters)
{
  int	y;
  int	x;

  y = -1;
  while (++y != lines)
    {
      x = -1;
      while (++x != letters)
	printf("%c", maze[y][x].ch);
      printf("\n");
    }
}

t_map	**pars_map(char *str, t_map **maze, int i, t_pos *max)
{
  int	y;
  int	x;

  y = -1;
  while (str[++i])
    if (str[i] == '\n')
      (*max).y++;
  while (str[++(*max).x] != '\n');
  if ((maze = malloc(sizeof(t_map *) * ((*max).y + 1))) == NULL)
    return (NULL);
  i = -1;
  while (++y != (*max).y)
    {
      x = -1;
      if ((maze[y] = malloc(sizeof(t_map) * ((*max).x + 1))) == NULL)
	return (NULL);
      while (str[++i] != '\n')
	{
	  maze[y][++x].ch = str[i];
          if (str[i] != '*' && str[i] != 'X')
            my_putstr("ERROR : Invalid character.\n", 2);
	  maze[y][x].visited = 0;
	  maze[y][x].exit = 0;
	}
      maze[y][++x].ch = '\0';
    }
  return (maze);
}

t_map	**open_map(char *str, t_map **maze, t_pos *max)
{
  char	*input;
  char	*map;
  int	fd;

  if ((fd = open(str, O_RDONLY)) == -1)
    return (NULL);
  map = "";
  while ((input = get_next_line(fd)))
    map = my_strcat(my_strcat("\n", input), map);
  if ((maze = pars_map(map, maze, -1, max)) == NULL)
    return (NULL);
  return (maze);
}

void	solve_maze(t_map **lab, int y, int x, t_pos max)
{
  lab[y][x].ch = 'o';
  lab[y][x].visited = 1;
  if (y == max.y - 1 && x == max.x - 1)
    return;
  lab[y][x].exit = 1;
  if (y != max.x - 1 && lab[y][x + 1].visited == 0 &&
      lab[y][x + 1].ch == '*' && lab[y][x + 1].exit == 0)
    (x + 1 != max.x && y != max.y) ? solve_maze(lab, y, x + 1, max) :(void)0;
  else if (y != max.y - 1 && lab[y + 1][x].visited == 0 &&
  	   lab[y + 1][x].ch == '*' && lab[y + 1][x].exit == 0)
    (x != max.x && y + 1 != max.y) ? solve_maze(lab, y + 1, x, max) : (void)0;
  else if (x != 0 && lab[y][x - 1].visited == 0 &&
  	   lab[y][x - 1].ch == '*' && lab[y][x - 1].exit == 0)
    (x - 1 != max.x && y != max.y) ? solve_maze(lab, y, x - 1, max) : (void)0;
  else if (y != 0 && lab[y - 1][x].visited == 0 &&
  	   lab[y - 1][x].ch == '*' && lab[y - 1][x].exit == 0)
    (x != max.x && y - 1 != max.y) ? solve_maze(lab, y - 1, x, max) : (void)0;
  else
    solve_lab(lab, y, x, max);
  if (lab[0][0].exit == 0 && lab[0][0].visited == 1)
    {
      my_putstr("Can't solve lab\n", 2);
      exit(EXIT_FAILURE);
    }
}

int	main(int argc, char **argv)
{
  t_map	**map;
  t_pos	max;
  int	i;

  i = -1;
  map = NULL;
  max.y = 0;
  max.x = 0;
  if (argc != 2)
    my_putstr("USAGE : ./profondeur [maze].\n", 2);
  if ((map = open_map(argv[1], map, &max)) == NULL)
    {
      my_putstr("can't open map\n", 2);
      return (2);
    }
  solve_maze(map, 0, 0, max);
  display_maze(map, max.y, max.x);
  while (++i != max.y)
    free(map[i]);
  free(map);
  return (0);
}
