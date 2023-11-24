/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:16:05 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/13 18:16:05 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(&s1[i]);
	while (j && ft_strchr(set, s1[j + i]))
		j--;
	str = ft_substr(s1, i, j + 1);
	return (str);
}

/* int	main(void)
{
	char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	char *set = " ";
	char *str = ft_strtrim(s1, set);
	
	printf("%s\n", str);
	return(0);
} */