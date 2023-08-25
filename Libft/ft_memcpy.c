#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s;
	char *x;

	s = (char *)src;
	x = (char *)dest;
	if(s == NULL && x == NULL)
		return (0);
	while (n--)
	{
		*x = *s;
		s++;
		x++;
	}
	return (dest);
}

/*
int main()
{
    //CASO 1
    const char *src = "Hola, mundo!";
    char dest[] = "Misco Jhones";
    ft_memcpy(dest, src, 4);
    printf("dest(ft_memcpy): %s\n", dest);
    memcpy(dest, src, 4);
    printf("dest(memcpy   ): %s\n\n", dest);

    // CASO 2
    const char *src2 = "Puñetero Jose";
    char dest2[] = "Misco Jhones";
    ft_memcpy(dest2, src2, 4);
    printf("dest(ft_memcpy): %s\n", dest2);
    memcpy(dest2, src2, 4);
    printf("dest(memcpy   ): %s\n\n", dest2);

    // CASO 3
    const char *src3 = "Sucia y detestable Coraline";
    char dest3[] = "astapatat lutat hija";
    ft_memcpy(dest3, src3, 5);
    printf("dest(ft_memcpy): %s\n", dest3);
    memcpy(dest3, src3, 5);
    printf("dest(memcpy   ): %s\n", dest3);

    return (0);
}
*/