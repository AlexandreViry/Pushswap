/*
** my_functions.c for my_functions in /home/mathon_j/rendu/CPE_2013_Pushswap/src
**
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
**
** Started on  Sun Jan  5 18:08:20 2014 Jérémy MATHON
** Last update Sun Jan  5 19:05:45 2014 Jérémy MATHON
*/

#include	<stdlib.h>
#include	"my_pushswap.h"

t_list		*my_add_in_list(t_list *list, int nb)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp->c = nb;
  tmp->next = list;
  list = tmp;
  return (list);
}

void		pa(t_list **l_a, t_list **l_b)
{
  int		nb;

  if (*l_b == NULL)
    return;
  nb = (*l_b)->c;
  *l_a = my_add_in_list(*l_a, nb);
  *l_b = (*l_b)->next;
  my_putstr("pa ");
}

void		pb(t_list **l_a, t_list **l_b)
{
 int		nb;

 if (*l_a == NULL)
   return;
  nb = (*l_a)->c;
  *l_b = my_add_in_list(*l_b, nb);
  *l_a = (*l_a)->next;
  my_putstr("pb ");
}

void		sa(t_list **l_a)
{
  t_list	*tmp;

  tmp = *l_a;
  tmp = tmp->next;
  (*l_a)->next = tmp->next;
  tmp->next = *l_a;
  *l_a = tmp;
  my_putstr("sa ");
}
