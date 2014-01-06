/*
** my_put_nbr.c for my_put_nbr in /home/mathon_j/rendu/Piscine-C-lib/my
**
** Made by Jeremy Mathon
** Login   <mathon_j@epitech.net>
**
** Started on  Wed Oct  9 13:50:48 2013 Jeremy Mathon
** Last update Sun Jan  5 17:28:06 2014 Jérémy MATHON
*/

#include	"my_pushswap.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb != 0 && nb > 10)
    my_put_nbr(nb/10);
  my_putchar(nb % 10 + 48);
  return (nb);
}
