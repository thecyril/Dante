/*
** del_by_pos.c for del_by_pos in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:43:38 2016 cyril puccio
** Last update Fri Mar 25 10:43:39 2016 cyril puccio
*/

#include "list.h"

void	condition_del_pos(t_node **tmp, t_list **list)
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

t_list		*del_by_pos(t_list *list, int pos)
{
  int		i;
  t_node	*tmp;

  i = 1;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && i <= pos)
	{
	  if (pos == i)
	    {
	      condition_del_pos(&tmp, &list);
	      free(tmp);
	      list->len--;
	    }
	  else
	    tmp = tmp->next;
	  i++;
	}
    }
  return (list);
}
