/*
** search_all_by_data.c for search_all_by_data in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:45:24 2016 cyril puccio
** Last update Fri Mar 25 10:45:25 2016 cyril puccio
*/

#include "list.h"

t_list		*search_all_by_data(t_list *list, void *data)
{
  t_list	*ret;
  t_node	*tmp;

  ret = NULL;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  if (tmp->data == data)
	    {
	      if (ret == NULL)
		ret = create_list();
	      ret = add_end(ret, data);
	    }
	  tmp = tmp->next;
	}
    }
  return (ret);
}
