#include "libft.h"

char *ft_strchr(const char *s, int c)
{
char *r;
char x;

  r = (char *) s;
  x = (char) c;

  while(*r)
    {
      if (*r == x)
      {
        return (r);
      }
      r++;
    }
  if (!x)
  {
    return (r);
  }
  return (0);
}