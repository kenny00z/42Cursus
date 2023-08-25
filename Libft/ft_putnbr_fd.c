#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;
	

	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -n;
	}
	else
	{
		nbr = n;
	}

	if (nbr / 10 > 0)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	write(fd, &("0123456789"[nbr % 10]), 1);

}
