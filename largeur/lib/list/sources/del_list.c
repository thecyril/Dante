/*
** del_list.c for del_list in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:44:26 2016 cyril puccio
** Last update Fri Mar 25 10:44:28 2016 cyril puccio
*/

#include "list.h"

void	del_list(t_list **list)
{
  t_node	*tmp;
  t_node	*del;

  if (*list != NULL)
    {
      tmp = (*list)->head;
      while (tmp != NULL)
	{
	  del = tmp;
	  tmp = tmp->next;
	  free(del);
	}
      free(*list), *list = NULL;
    }
}
