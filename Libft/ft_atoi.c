#include "libft.h"


int ft_atoi(const char *nptr)
{
	int i;
 	int nb;
 	int sign;

 	i = 0;
  	sign = 1;
 	nb = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
    	i++;
 		if (nptr [i] == '-')
		{
			sign = -sign;
			i++;
		}
		else if (nptr [i] == '+')
			i++;
  	while(nptr[i] >= '0' && nptr[i] <= '9')
    	{
      	nb = nb * 10 + nptr[i] - '0';
      	i++;
    	}
  	return (nb * sign);
}

