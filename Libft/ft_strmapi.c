#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s1;

	i = 0;
	if (!s || !f)
		return (0);
	s1 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s1)
		return (0);
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		++i;
	}
	s1[i] = 0;
	return (s1);
}


/*
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	int		i;

	s1 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s1)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(s1 + i) = f(i,*(s + i));
		i++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
*/