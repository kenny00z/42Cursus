#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *r;
  //size_t i;

  r = (unsigned char *) s;
//  i = 0;
  while (/*i++ <*/ n-- )
    {
      if(*r == (unsigned char) c)
        return (r);
      r++;
    }
  return (0);
}

/*
int main()
{
  
  // CASO 1
  char str1[] = "mis huevos";
  void *result1 = ft_memchr(str1, 'h', 5);
  printf("Result 1 (ft_memchr): %p\n", result1);
  int position1 = (unsigned char *)result1 - (unsigned char *)str1;
  printf("Position 1: %d\n", position1);
  
  void *result1_original = memchr(str1, 'h', 5);
  printf("Result 1 (memchr   ): %p\n", result1_original);
  int position1_original = (unsigned char *)result1_original - (unsigned     char *)str1;
  printf("Position 1: %d\n", position1_original);

  
  //CASO 2
  char str2[] = "asdasdxasdasdassd";
  void *result2 = ft_memchr(str2, 'x', 7);
  printf("Result 2 (ft_memchr): %p\n", result2);
  int position2 = (unsigned char *)result2 - (unsigned char *)str2;
  printf("Position 2: %d\n", position2);
  
  void *result2_original = memchr(str2, 'x', 7);
  printf("Result 2 (memchr   ): %p\n", result2_original);
  int position2_original = (unsigned char *)result2_original - (unsigned     char *)str2;
  printf("Position 2: %d\n", position2_original);

  
  // CASO 3
  char str3[] = "wololooos";
  void *result3 = ft_memchr(str3, 's', 25);
  printf("Result 3 (ft_memchr): %p\n", result3);
  int position3 = (unsigned char *)result3 - (unsigned char *)str3;
  printf("Position 3: %d\n", position3);

  void *result3_original = memchr(str3, 's', 25);
  printf("Result 3 (memchr   ): %p\n", result3_original);
  int position3_original = (unsigned char *)result3_original - (unsigned     char *)str3;
  printf("Position 3: %d\n", position3_original);
  

  //CASO 4
  char str4[] = "hola q hase bueno dia";
  void *result4 = ft_memchr(str4, 'z', 5);
  printf("Result 4 (ft_memchr): %p\n", result4);
  if (result4 != NULL)
  {
    int position4 = (unsigned char *)result4 - (unsigned char *)str4;
    printf("Position 4: %d\n", position4);
  }

  void *result4_original = memchr(str4, 'z', 5);
  printf("Result 4 (memchr   ): %p\n", result4_original);
  if (result4_original != NULL)
  {
    int position4_original = (unsigned char *)result4_original -              (unsigned char *)str4;
    printf("Position 4: %d\n", position4_original);
  }
  

  return (0);
}
*/