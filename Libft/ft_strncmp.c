#include <stdio.h>
#include <string.h>
#include "libft.h"


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;
  unsigned char *us1;
  unsigned char *us2;

  us1 = (unsigned char *) s1;
  us2 = (unsigned char *) s2;
  
  i = 0;  
  if (!n)
    return (0);
  while (i < n && (us1[i] || us2[i]))
    {
      if (us1[i] != us2[i])
        return ( us1[i] - us2[i]);
      i++;
    }
return (0);
}

/*
VERSION PUNTERO
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;
  unsigned char *us1;
  unsigned char *us2;

  us1 = (unsigned char *) s1;
  us2 = (unsigned char *) s2;
  
  i = 1;  
  if (!n)
    return (0);
  while (i < n &&(*us1 || *us2))
    {
		if (*us1 != *us2)
        return (*us1 - *us2);
      us1++;
      us2++;
      i++;
    }
return (0);
}
*/

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
  
  printf("Result 1: %d\n", ft_strncmp("Hola\200", "Hola\0", 7));
  printf("Result 1: %d\n", strncmp("Hola\200", "Hola\0", 7));

  printf("Result 2: %d\n", ft_strncmp(s1, s2, n2));
  printf("Result 2: %d\n", strncmp(s1, s2, n2));

  printf("Result 3: %d\n", ft_strncmp(s2, s3, 3));
  printf("Result 3: %d\n", strncmp(s2, s3, 3));

  printf("Result 4: %d\n", ft_strncmp(s1, s4, n1));
  printf("Result 4: %d\n", strncmp(s1, s4, n1));

  printf("Result 5: %d\n", ft_strncmp(s5, s6, n3));
  printf("Result 5: %d\n", strncmp(s5, s6, n3));

  printf("Result 6: %d\n", ft_strncmp("1234", "1235", 3));
  printf("Result 6: %d\n", strncmp("1234", "1235", 3));

  printf("Result 7: %d\n",ft_strncmp("1", "", 0));
  printf("Result 7: %d\n",strncmp("1", "", 0));

  printf("Result 8: %d\n",ft_strncmp("1234", "", 3));
  printf("Result 8: %d\n",strncmp("1235", "", 5));

  printf("Result 9: %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
  printf("Result 9: %d\n", strncmp("abcdefgh", "abcdwxyz", 4));


  printf("Result 10: %d\n", ft_strncmp("Tripouille", "tripouille", 42));
  printf("Result 10: %d\n", strncmp("Tripouille", "tripouille", 42));

  return (0);
}
*/