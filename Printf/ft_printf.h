#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(int c, int *counter);
void	ft_putstr( char *s, int *counter);
void	ft_putnbr(int n, int *counter);

#endif
