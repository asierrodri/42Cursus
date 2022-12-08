#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  i;
    size_t  j;

    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while(s1[j] != '\0')
        str[i++] = s1[j++];
    j = 0;
    while (s2[j] != '\0')
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}
