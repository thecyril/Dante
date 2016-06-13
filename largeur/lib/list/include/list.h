/*
** list.h for puccio_c in /home/puccio_c/rendu/Prog_Elem/CPE_2015_corewar/asm/lib/list/include
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Mar 25 10:40:53 2016 cyril puccio
** Last update Fri Mar 25 10:40:54 2016 cyril puccio
*/

#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <unistd.h>
#include "../../my/include/my.h"

typedef struct	s_node
{
  char		*data;
  struct s_node	*next;
  struct s_node	*prev;
}		t_node;

typedef struct	s_list
{
  int		len;
  t_node	*tail;
  t_node	*head;
}		t_list;

int		len_of_list(t_list *list);
void		del_list(t_list **list);
void		print_list(t_list *list);
/* void            del_first_by_data(t_list *list, void *data); */
t_node		*create_node();
t_list		*create_list();
t_list          *rev_list(t_list *list);
t_list          *del_by_pos(t_list *list, int pos);
t_list		*add_beg(t_list *list, void *data);
t_list		*add_end(t_list *list, void *data);
t_list		*del_all_by_data(t_list *list, void *data);
t_list          *del_first_by_data(t_list *list, void *data);
t_list          *search_all_by_data(t_list *list, void *data);
t_list		*add_at_pos(t_list *list, void *data, int pos);
t_list          *search_first_by_data(t_list *list, void *data);

#endif /* !LIST_H_ */
