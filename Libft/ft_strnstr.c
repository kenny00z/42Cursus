#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);

    if (needle_len == 0)
        return (char *)haystack;

    while (*haystack //(*s1)// && len >= needle_len//(*s2_len)//) {
        if (ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        haystack++;  //(*s1)
        len--; 
    }
	return (0);
}
*/



char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  char *s1;
  char *s2;
  size_t s2_len;

  s1 = (char *)haystack;
  s2 = (char *)needle;
  s2_len = ft_strlen(s2); 
  if (ft_strlen(s2) == 0)
    return (s1);
	//if (ft_strlen(s1) < s2_len)
	//return (0);
  while ( *s1 && len-- >= s2_len) // colocando el si *s1 llega a nulo damos por hecho que si esta es mas corta que *s2 saldra del bucle indicando null sin necesidad de poner la condicion del if comparando las lengths.
    {
          if ((ft_strncmp(s1, s2, s2_len)) == 0 )
            return (s1);
          s1++;
		 // len--;
	}
  return (0);
}


