#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *s;
	char *x;

	s = (char *)src;
	x = (char *)dest;
	if (s == NULL && x == NULL)
		return (0);
	if (s < x) // comparamos src con dest entendiendo que si dest es mayor que src tenemos riesgo de overlaping y debemos controlarlo empezando desde "atras"
	{
		while (len--)
			*(x + len) = *(s + len); // movemos el puntero hasta el final de la memoria y lo igualamos y con el propio len-- ya estamos decrementando ese mismo puntero.
	}
	else
	{
		while (len--)
		{
			*x = *s;
			s++;
			x++;
		}
	}
	return (dest);
}
