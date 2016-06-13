/*
** create_node.c for create_node.c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:42:57 2016 cyril puccio
** Last update Fri Mar 25 10:42:59 2016 cyril puccio
*/

#include "list.h"

t_node	*create_node()
{
  t_node	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    return (new);
  else
    exit (-1);
}
