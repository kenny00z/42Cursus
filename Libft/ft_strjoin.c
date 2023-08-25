#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s3;
	size_t sum_len;

	sum_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc ((sum_len + 1) * sizeof(char));
	if (!s3)
		return (0);
	ft_strlcpy (s3, s1, ft_strlen(s1) + 1);
	ft_strlcat (s3 , s2, sum_len + 1);
	return (s3);
}