/*
** search_first_by_data.c for search_first_by_data in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:45:40 2016 cyril puccio
** Last update Fri Mar 25 10:45:41 2016 cyril puccio
*/

#include "list.h"

t_list		*search_first_by_data(t_list *list, void *data)
{
  int		found;
  t_list	*ret;
  t_node	*tmp;

  found = 0;
  ret = NULL;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && !found)
	{
	  if (tmp->data == data)
	    {
	      ret = create_list();
	      ret = add_end(ret, data);
	      found = 1;
	    }
	  else
	    tmp = tmp->next;
	}
    }
  return (ret);
}
