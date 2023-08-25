#include "libft.h"

size_t    ft_digits(int n)
{
    size_t count;

    count = 0;
    if (n == 0)
        return (count + 1);
    while (n)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

int    ft_sign(int n)
{
    int    sign;

    sign = 0;
    if (n < 0)
    {
        sign = 1;
        n *= -1;
    }
    return (sign);
}

char *ft_strrev(char *s1) 
{
    int len;
    char *end;
    char *start;
    
    len = 0;
    end = (char *)s1;
    if (!s1)
        return (0);
    while (*end) 
    {
        end++;
        len++;
    }
    start = (char *)s1;
    end--;
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return (s1);
}

void ft_check(int sign, long nb, char *str, int *i)
{
    if (sign == 1)
        nb *= -1;
    if (nb == 0)
        str[(*i)++] = '0';
     
}

char    *ft_itoa(int n)
{
    char       *str;
    int        size;
    int        sign;
    int        i;
    long       nb;

    size = ft_digits(n);
    sign = ft_sign(n);
    nb = n;
    str = (char *)malloc(sizeof(char) * (size + sign + 1));
    if (!str)
        return (0);
    i = 0;
    ft_check(sign, nb, str, &i);
    if(sign)
       nb *= -1;
    while (nb)
    {
        str[i++] = '0' + (nb % 10);
        nb = nb / 10;
    }
    if (sign)
    str[i] = '-';
    str[i+sign] = '\0';
    return (ft_strrev(str));
}








/*
void ft_strrev(char *s1) {

    int len = 0;
    char *end;
	char *start;
	
	end = (char *)s1;
	if (!s1)
        return;
    while (*end) {
        end++;
        len++;
    }
	start = (char *)s1;
    end--;
    while (start < end) 
	{
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}



int	ft_pow10(int pow)
{
	int	nb;

	if (pow == 0)
		return (1);
	nb = 10;
	while (pow > 1)
	{
		nb = nb * 10;
		pow--;
	}
	return (nb);
}


size_t ft_digits(int n)
{
    size_t count = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n *= -1;
    while (n)
    {
        n = n / 10;
        count++;
    }
    return count;
}
*/