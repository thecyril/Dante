/*
** len_of_list.c for len_of_list in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/sources
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:44:46 2016 cyril puccio
** Last update Fri Mar 25 10:44:47 2016 cyril puccio
*/

#include "list.h"

int	len_of_list(t_list *list)
{
  int	len;

  len = 0;
  if (list != NULL)
    len = list->len;
  return (len);
}
