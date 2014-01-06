/*
** my_pushswap.h for my_pushswap in /home/mathon_j/rendu/CPE_2013_Pushswap/src
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sun Dec 22 22:55:49 2013 Jérémy MATHON
** Last update Sun Jan  5 18:29:20 2014 Jérémy MATHON
*/

#ifndef MY_PUSHSWAP_H_
# define MY_PUSHSWAP_H_

typedef struct s_list
{
  int          c;
  struct s_list *next;
} t_list;

#endif /* !MY_PUSHSWAP_H_ */

int	my_getnbr(char *str);
int	my_put_nbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(int *str);
int	my_swap(int *a, int *b);
void	sa(t_list **l_a);
void	pa(t_list **, t_list **);
void	pb(t_list **, t_list **);
