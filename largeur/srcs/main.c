/*
** main.c for main in /home/puccio_c/rendu/Prog_Elem/dante/largeur
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sun May 22 15:46:52 2016 cyril puccio
** Last update Sun May 29 13:06:33 2016 cyril puccio
*/

# include "dante.h"

void            show_tab(char **tab)
{
  int           i;

  i = -1;
  while (tab[++i] != NULL)
    my_printf("%s\n", tab[i]);
}

int		len_tab(char **tab)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (tab[j])
    {
      i = 0;
      while (tab[j][i])
	i++;
      j++;
    }
  return (j);
}

int		algo(t_var *var)
{
  int		y;
  int		x;
  t_list	*list;

  list = NULL;
  y = len_tab(var->map);
  x = strlen(var->map[0]);
  if (var->map[y - 1][x - 1] == 'X')
    {
      printf("No solution found");
      return (-1);
    }
  list = add_end(list, 0, 0, 0, 0);
  list = find_way(var->map, x, y, list);
  aff_way(var->map, list);
  show_tab(var->map);
  free_list(list);
  return (0);
}

char		**open_map(char *arg, t_var *var)
{
  int		fd;
  char		*s;

  var->str = "\0";
  if ((fd = open(arg, O_RDONLY)) == -1)
    return (NULL);
  while ((s = get_next_line(fd)))
    {
      s = my_strcat(s, "\n");
      var->str = my_strcat(var->str, s);
    }
  var->map = my_str_to_wordtab(var->str);
  var->savemap = my_str_to_wordtab(var->str);
  return (var->map);
}

int		main(int ac, char **av)
{
  t_var		*var;

  var = xmalloc(sizeof(t_var));
  if (ac == 2)
    {
      if ((var->map = open_map(av[1], var)) == NULL)
	{
	  puts("can't open map");
	  return (2);
	}
      if (algo(var) == -1)
	return (-1);
      free(var->map);
    }
  return (0);
}
