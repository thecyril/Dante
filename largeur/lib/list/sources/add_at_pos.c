/*
** add_at_pos.c for puccio_c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:41:26 2016 cyril puccio
** Last update Fri Mar 25 10:41:27 2016 cyril puccio
*/

#include "list.h"

void	else_add_at_pos(t_list **list, void *data, t_node **new, t_node **tmp)
{
  (*new) = create_node();
  if (*new != NULL)
    {
      (*new)->data = data;
      (*tmp)->next->prev = (*new);
      (*tmp)->prev->next = (*new);
      (*new)->prev = (*tmp)->prev;
      (*new)->next = (*tmp);
      (*list)->len++;
    }
}

t_list		*add_at_pos(t_list *list, void *data, int pos)
{
  int		i;
  t_node	*new;
  t_node	*tmp;

  i = 1;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && i <= pos)
	{
	  if (pos == i)
	    {
	      if (tmp->next == NULL)
		list = add_end(list, data);
	      else if (tmp->prev == NULL)
		list = add_beg(list, data);
	      else
		else_add_at_pos(&list, data, &new, &tmp);
	    }
	  else
	    tmp = tmp->next;
	  i++;
	}
    }
  return (list);
}
