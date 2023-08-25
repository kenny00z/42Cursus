#include "libft.h"



void 	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *r;
	//size_t i;

	r = (unsigned char *) s;
	//i = 0;
	while(/*i++ < */n--)
	{
		*r = c;
		r++;
	}
	return (s);
}


/*
int main (void)
{
    char str1[] = "mis huevos";
    printf("Result 1: %p\n", ft_memset(str1, 'h', 5));
    printf("Result 1.1:%s\n" , str1);
    printf("Result 1: %p\n", memset(str1, 'h', 5));
    printf("Result 1.2:%s\n\n" , str1);

    char str2[] = "Tripouille";
    printf("Result 2: %p\n", ft_memset(str2, 'p', 3));
    printf("Result 2.1:%s\n" , str2);
    printf("Result 2: %p\n", memset(str2, 'p', 3));
    printf("Result 2.2:%s\n\n" , str2);

    char str3[] = "Lololololo";
    printf("Result 3: %p\n", ft_memset(str3, 'l', 7));
    printf("Result 3.1:%s\n" , str3);
    printf("Result 3: %p\n", memset(str3, 'l', 7));
    printf("Result 3.2:%s\n\n" , str3); 

    char str4[] = "Excuseme";
    printf("Result 4: %p\n", ft_memset(str4, 'E', 8));
    printf("Result 4.1:%s\n" , str4);
    printf("Result 4: %p\n", memset(str4, 'E', 8));
    printf("Result 4.2:%s\n\n" , str4);

    char str5[] = "testealo";
    printf("Result 5: %p\n", ft_memset(str5, 'e', 9));
    printf("Result 5.1:%s\n" , str5);
    printf("Result 5: %p\n", memset(str5, 'e', 9));
    printf("Result 5.2:%s\n\n" , str5);
  
    char str6[] = "teste";
    printf("Result 6: %p\n", ft_memset(str6, '\0', 5));
    printf("Result 6.1:%s\n" , str6);
    printf("Result 6: %p\n", memset(str6, '\0', 5));
    printf("Result 6.2:%s\n\n" , str6);

    char str7[8];
    printf("Result 7: %p\n", ft_memset(str7, 'A', sizeof(str7)));
    printf("Result 7.1:%s\n" , str7);
    printf("Result 7: %p\n", memset(str7, 'A', sizeof(str7)));
    printf("Result 7.2:%s\n\n" , str7);
  return (0); 
}

*/