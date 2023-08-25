#include "ft_printf.h"

void ft_putnbr(int n, int *counter)
{
  	unsigned int nbr;

	nbr = n;
  if(n < 0)
  {
	ft_putchar('-', counter);
	/*
	if (*counter == -1)
	return ;
	*/
      n = -nbr;
  }else{
    n = nbr;
  }
  if ( nbr / 10 > 0)
    {
      ft_putnbr(nbr / 10, counter);
    }
   if (write(1, &("0123456789"[nbr % 10]), 1) == -1)

	*counter = -1;
	else 
	*counter += 1;
	if (*counter == -1)
	return ;
}
