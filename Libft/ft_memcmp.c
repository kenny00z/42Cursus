#include "libft.h"
#include <stdio.h>
#include <string.h>
 
 int	ft_memcmp(const void *s1, const void *s2, size_t n)
 {
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	if (!n)
		return (0);
	while (n--)
    {
   	if (*us1 != *us2)
        return (*us1 - *us2);
      us1++;
      us2++;
    }
	return (0);
 }
 
 
/*
int main (void)
{
  const char *s1 = "Hola\200";
  const char *s2 = "Hola\0";
  const char *s3 = "Hola wey";
  const char *s4 = "Que dises wey";
  const char *s5 = "t";
  const char *s6 = "";

  size_t n1 = 7;
  size_t n2 = 12;
  size_t n3 = 0;
	
  printf("Result 1: %d\n", ft_memcmp("Hola\200", "Hola\0", 7));
  printf("Result 1: %d\n", memcmp("Hola\200", "Hola\0", 7));

  printf("Result 2: %d\n", ft_memcmp(s1, s2, n2));
  printf("Result 2: %d\n", memcmp(s1, s2, n2));

  printf("Result 3: %d\n", ft_memcmp(s2, s3, 3));
  printf("Result 3: %d\n", memcmp(s2, s3, 3));

  printf("Result 4: %d\n", ft_memcmp(s1, s4, n1));
  printf("Result 4: %d\n", memcmp(s1, s4, n1));

  printf("Result 5: %d\n", ft_memcmp(s5, s6, n3));
  printf("Result 5: %d\n", memcmp(s5, s6, n3));
  
  return (0);

}
*/