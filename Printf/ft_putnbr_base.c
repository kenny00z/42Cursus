#include "ft_printf.h"

int ft_strl(char *str)
{
  int  i;

  i = 0;
  while(str[i])
    i++;
  return (i);
}


int base_check(char *str)
{
  int  i;
  int j;

  i = 0;
  if(str[i] == '\0')
    return (1);
  if(str[1] == '\0')
    return(1);
  while (str[i])
    {
      j = 0;
      while (str[j])
        {
          if ((str[i] == str[j] || str[i] == '-' || str[i] == '+')
            && j != i)
            return (1);
          j++;
        }
      i++;
    }
  return (0);
}


void ft_putnbr_base(int nbr, char *base)
{
  unsigned int n;

  
  if (base_check(base) == 0)
  {
  if(nbr < 0)
  {
    write(1, "-", 1);
      n = -nbr;
  }else{
    n = nbr;
  }
  if ( n / ft_strl(base) > 0)
    {
      ft_putnbr_base(n / ft_strl(base), base);
    }
   write(1,&(base[n % ft_strl(base)]), 1);
  }
}

/*
int main()
{
    int num = 	214743647;
    char* base = "01";

    printf(" The number %d in base %s is: ", num, base);
    printf ("\n");
    ft_putnbr_base(num, base);
    printf("\n");

    return 0;
}
*/