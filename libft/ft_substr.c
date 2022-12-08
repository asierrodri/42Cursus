#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  j;

    str = (char *)malloc(ft_strlen(s) + 1);
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (i >= start - 1 && i < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return (str);
}

int	main(void)
{
	char const      *s = "Hola que tal ";
	unsigned int    start = 2;
    unsigned int    len = 6;
	char *str = ft_substr(s, start, len);
	
	printf("%s\n", str);
	return(0);
}