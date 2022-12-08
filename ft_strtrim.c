#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  i;
    size_t  j;

    str = (char *)malloc(ft_strlen(s1) + 1);
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != *set)
        {
            str[j] = s1[i];
            j++;
        }
        else
            set++;
        i++;
    }
    str[j] = '\0';
    return (str);
}

int	main(void)
{
	char *s1 = "Hola que tal ";
	char *set = "aq";
	char *str = ft_strtrim(s1, set);
	
	printf("%s\n", str);
	return(0);
}