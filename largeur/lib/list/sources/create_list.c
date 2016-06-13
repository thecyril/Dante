/*
** create_list.c for create_list.c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:42:37 2016 cyril puccio
** Last update Fri Mar 25 10:42:39 2016 cyril puccio
*/

#include "list.h"

t_list	*create_list()
{
  t_list	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    if (new != NULL)
      {
	new->len = 0;
	new->head = NULL;
	new->tail = NULL;
      }
  return (new);
}
