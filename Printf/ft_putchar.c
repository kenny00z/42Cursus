#include "ft_printf.h"

void ft_putchar(int c, int *counter)
{
	if (write(1, &c, 1) == -1)
	*counter = -1;
	else 
	*counter += 1;
}

void ft_putstr( char *s, int *counter)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], counter);
		if ( *counter == -1)
			return ;
		i++;
	}
}