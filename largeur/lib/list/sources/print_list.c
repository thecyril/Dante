/*
** print_list.c for puccio_c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:44:59 2016 cyril puccio
** Last update Fri Mar 25 10:45:00 2016 cyril puccio
*/

#include "list.h"

void	print_list(t_list *list)
{
  t_node	*tmp;

  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  my_printf("%s -> ", tmp->data);
	  tmp = tmp->next;
	}
    }
  my_printf("NULL\n");
}
