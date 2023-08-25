#include "libft.h"

int    ft_countwords(char const *s, char c)
{
    int     i;
    int     words;

    i = 0;
    words = 0;
    while(s[i])
    {
        if (s[i - 1] == c && s[i] != c && i > 0)
            words++;   
        if( i == 0 && s[i] != c)
            words++;
        i++;
    }
    return (words);
}


char    **ft_free(char **s , int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        free(s[j]);
        j++;
    }
    free(s);
    return (NULL);
}

char    **lil_split(char const *s, char c, char **res) {
    int i;
    int start; 
    int end;

    start = 0;
    i = 0;
    while (s[start]) {
        while (s[start] == c && s[start])
            start++;
        if (s[start]) {
            end = start;
            while (s[end] && s[end] != c)
                end++;
            res[i] = ft_substr(s, start, end - start);
            if (!res[i]) {
                return (ft_free(res, i));
            }
            i++;
            start = end;
        }
    }
    res[i] = NULL;
    return (res);
}

char    **ft_split(char const *s, char c)
{
    char    **res;

    res = malloc((ft_countwords(s, c) + 1) * sizeof(char*));   
    if (!res)
        return (0);
    return (lil_split(s, c, res));
}



/*
void lil_split(char const *s, char c, char **res) 
{
    int i;

    i = 0;
    while (*s) {
        while (*s == c && *s)
            s++;
        if (*s) {
            if (!ft_strchr(s, c))
                res[i] = ft_substr(s, 0, ft_strlen(s));
            else
                res[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
            if (!res[i]) {
                ft_free(res);
                return;
            }
            i++;
            s = s + ft_strlen(res[i - 1]);
        }
    }
    res[i] = NULL;
}
*/
/*
void lil_split(char const *s, char c, char **res) 
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    while (*s) {
        while (*s == c && *s)
            s++;
        if (*s) {
            if (!ft_strchr(s, c))
                res[i] = ft_substr(s, 0, ft_strlen(s));
            else
                res[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
            if (!res[i++]) {
               flag = 1;
                return;
            }
            s = s + ft_strlen(res[i - 1]);
        }
    }
    if (flag)
    ft_free(res);
    res[i] = NULL;
}
*/

/*
char *lil_split(char *s, char c)
{
    int i;
    int start;

    i = 0;
    while (s[i])
    {
        if (s[i - 1] == c && s[i] != c && i > 0)
        {
            i++;
            start++;
        }
        if (s[i + 1] == c || s[i] == '\0' || s[i] != c)
        {
            ..........................!!!!!!!!!!!!!!!!
        }
    }
}


   while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
*/