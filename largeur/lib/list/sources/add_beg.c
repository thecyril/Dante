/*
** add_beg.c for puccio_c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:41:37 2016 cyril puccio
** Last update Fri Mar 25 10:41:38 2016 cyril puccio
*/

#include "list.h"

t_list	*add_beg(t_list *list, void *data)
{
  t_node	*new;

  new = create_node();
  if (list != NULL)
    {
      if (new != NULL)
	{
	  new->data = data;
	  new->prev = NULL;
	  if (list->tail == NULL)
	    {
	      new->next = NULL;
	      list->head = new;
	      list->tail = new;
	    }
	  else
	    {
	      list->head->prev = new;
	      new->next = list->head;
	      list->head = new;
	    }
	  list->len++;
	}
    }
  return (list);
}
