#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t src_len;
  size_t dst_len;
  size_t i;
  size_t j;
 
  
  src_len = ft_strlen(src);
  dst_len = ft_strlen(dst);

  if (dstsize == 0 || dstsize <= dst_len)
    return (src_len + dstsize);
  i = 0;
  j = dst_len;
  while (*(src + i) != '\0' && j + 1 < dstsize)
    {
      *(dst + j) = *(src + i);
      i++;
      j++;
    }
  *(dst + j) = '\0';
  return (src_len + dst_len);
}


/*
int    main(void)
{
    char dest[14] = "a";
    unsigned int result;

    result = ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
    printf("Cadena concatenada: %s\n", dest);
    printf("Longitud total: %u\n", result);

    return (0);
}
*/