/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:32:09 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 16:49:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_mallocsize(char const *s, char c)
{
	size_t	i;
	size_t	pos;

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
	return (pos);
}

char	**ft_tab(char const *s, char **tab, char c)
{
	size_t	i;
	size_t	pos;
	size_t	start;
	size_t	j;

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
			tab[pos++] = ft_substr(s, start, j);
		}
	}
	tab[pos] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc((ft_mallocsize(s, c) + 1) * sizeof(char *));
	if (!tab || s == NULL)
		return (0);
	return (ft_tab(s, tab, c));
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
