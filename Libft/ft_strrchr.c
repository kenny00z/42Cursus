char *ft_strrchr(const char *s, int c)
{
char *r;
char x;
int i;

  r = (char *) s;
  x = (char) c;
  i = 0;
    while(*r)
    {
      i++;
      r++;
    }
    while(i >= 0)
      {
          if (*r == x )
        return (r);
        i--;
        r--;   
      }
  if (x == '\0') // --> (!x)
    return (r);
  return (0);
}


/*
int main (void)
{
  printf("Result 1: %p\n", ft_strrchr("mis huevos", 'h'));
  printf("Result 1: %p\n", strrchr("mis huevos", 'h'));

  printf("Result 2: %p\n",ft_strrchr("Tripouille", 'p'));
  printf("Result 2: %p\n",strrchr("Tripouille", 'p'));

  printf("Result 3: %p\n",ft_strrchr("Tripouille", 'l'));
  printf("Result 3: %p\n",strrchr("Tripouille", 'l'));

  printf("Result 4: %p\n", ft_strrchr("Tripouille", 'E'));
  printf("Result 4: %p\n", strrchr("Tripouille", 'E'));

  printf("Result 5: %p\n", ft_strrchr("teste", 'e'));
  printf("Result 5: %p\n", strrchr("teste", 'e'));

  printf("Result 6: %p\n", ft_strrchr("teste",'\0'));
  printf("Result 6: %p\n", strrchr("teste",'\0'));

  return (0);  
}
*/