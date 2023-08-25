#include <stdio.h>
#include <string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t src_len;

  src_len = strlen(src);
  if (dstsize <= 0)
    return (src_len);
  while (*src && --dstsize)
    {
      *dst = *src;
      src++;
      dst++;
    }
  *dst = '\0';
return (src_len);
}

