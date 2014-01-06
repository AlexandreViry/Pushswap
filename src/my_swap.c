/*
** my_swap.c for my_swap.c in /home/mathon_j/rendu/Piscine-C-Jour_04
**
** Made by Jeremy Mathon
** Login   <mathon_j@epitech.net>
**
** Started on  Thu Oct  3 10:24:21 2013 Jeremy Mathon
** Last update Sun Jan  5 17:29:11 2014 Jérémy MATHON
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
