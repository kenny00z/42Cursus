#include "libft.h"

/*
char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char *d;
	unsigned int s_len;

	s_len = ft_strlen(s) + 1;
	if (!s)
		return (0);
	if (len <= 0 || start > s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	d = (char *)malloc ((len + 1) * sizeof(*d));
	if (!d)
	return (0);
	ft_strlcpy(d, (char *)(s + start), len + 1);
	return (d);
}
*/


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		d = (char *)malloc (sizeof(*d));
		if (!d)
			return (0);
		*d = 0;
		return (d);
	}
	if (len > (s_len - start))
		len = s_len - start;
	d = (char *)malloc ((len + 1) * sizeof(*d));
	if (!d)
		return (0);
	ft_strlcpy(d, (char *)(s + start), len + 1);
	return (d);
}
