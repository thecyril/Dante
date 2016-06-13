/*
** del_first_by_data.c for del_first_by_data in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:44:10 2016 cyril puccio
** Last update Fri Mar 25 10:44:11 2016 cyril puccio
*/

#include "list.h"

void	condition_del_first_data(t_node **tmp, t_list **list)
{
  if ((*tmp)->next == NULL)
    {
      (*list)->tail = (*tmp)->prev;
      (*list)->tail->next = NULL;
    }
  else if ((*tmp)->prev == NULL)
    {
      (*list)->head = (*tmp)->next;
      (*list)->head->prev = NULL;
    }
  else
    {
      (*tmp)->next->prev = (*tmp)->prev;
      (*tmp)->prev->next = (*tmp)->next;
    }
}

t_list		*del_first_by_data(t_list *list, void *data)
{
  int		found;
  t_node	*tmp;

  if (list != NULL)
    {
      tmp = list->head;
      found = 0;
      while (tmp != NULL && !found)
	{
	  if (tmp->data == data)
	    {
	      condition_del_first_data(&tmp, &list);
	      free(tmp);
	      list->len--;
	      found = 1;
	    }
	  else
	    {
	      tmp = tmp->next;
	    }
	}
    }
  return (list);
}
