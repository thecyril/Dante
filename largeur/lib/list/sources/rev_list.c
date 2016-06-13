/*
** rev_list.c for rev_list in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:45:09 2016 cyril puccio
** Last update Fri Mar 25 10:45:10 2016 cyril puccio
*/

#include "list.h"

t_list		*rev_list(t_list *list)
{
  t_list	*ret;
  t_node	*tmp;

  ret = NULL;
  tmp = list->tail;
  if (list != NULL)
    {
      ret = create_list();
      while (tmp != NULL)
	{
	  ret = add_end(ret, tmp->data);
	  tmp = tmp->prev;
	}
    }
  return (ret);
}
