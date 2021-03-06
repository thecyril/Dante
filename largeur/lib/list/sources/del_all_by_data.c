/*
** del_all_by_data.c for dell_all_data in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:43:13 2016 cyril puccio
** Last update Fri Mar 25 10:43:14 2016 cyril puccio
*/

#include "list.h"

void	condition_of_del_all(t_node **del, t_list **list)
{
  if ((*del)->next == NULL)
    {
      (*list)->tail = (*del)->prev;
      (*list)->tail->next = NULL;
    }
  else if ((*del)->prev == NULL)
    {
      (*list)->head = (*del)->next;
      (*list)->head->prev = NULL;
    }
  else
    {
      (*del)->next->prev = (*del)->prev;
      (*del)->prev->next = (*del)->next;
    }
}

t_list	*del_all_by_data(t_list *list, void *data)
{
  t_node	*tmp;
  t_node	*del;

  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  if (tmp->data == data)
	    {
	      del = tmp;
	      tmp = tmp->next;
	      condition_of_del_all(&del, &list);
	      free(del);
	      list->len--;
	    }
	  else
	    tmp = tmp->next;
	}
    }
  return (list);
}
