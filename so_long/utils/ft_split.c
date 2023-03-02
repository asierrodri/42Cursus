/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:24:08 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/02 20:17:56 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static size_t	ft_mallocsize(char const *s, char c)
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

static char	**ft_tab(char const *s, char **tab, char c)
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

char	**ft_split(char const *s, char c, t_game *game)
{
	char	**tab;
	int		mallocsize;

	mallocsize = ft_mallocsize(s, c);
	game->y = mallocsize;
	if (s == NULL)
		return (0);
	tab = (char **)malloc((mallocsize + 1) * sizeof(char *));
	if (!tab)
		return (0);
	return (ft_tab(s, tab, c));
}
