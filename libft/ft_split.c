/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:32:09 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/19 20:09:15 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_strlen.c"
#include "ft_memcpy.c"
#include "ft_strdup.c"
#include "ft_substr.c"

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);*/

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	pos;
	size_t	j;
	size_t	start;

	if (s == NULL)
		return (0);
	i = 0;
	pos = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			pos++;
		while (s[i] && s[i] != c)
			i++;
	}
	tab = (char **)malloc((pos + 1) * sizeof(char *));
	if (!tab || s == NULL)
		return (0);
	i = 0;
	pos = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		j = 0;
		if (s[i])
		{
			while (s[i] && s[i] != c)
			{
				i++;
				j++;
			}
			tab[pos] = ft_substr(s, start, j);
			pos++;
		}
	}
	tab[pos] = NULL;
	return (tab);
}

/*int	main(void)
{
	int		i = 0;
	char	**tab;

//	tab = ft_split("hola asieer hola", ' ');
	tab = ft_split("\0aa\0bbb", '\0');
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
