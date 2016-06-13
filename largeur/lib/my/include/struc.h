/*
** struc.h for struc in 
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Wed Feb 10 12:11:23 2016 cyril puccio
** Last update Wed Feb 10 12:11:55 2016 cyril puccio
*/

#ifndef         _STRUCT_H
# define        _STRUCT_H

typedef struct s_list
{
  char          *str;
  int           first;
  int           select;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

#endif  /* _STRUCT_ */
