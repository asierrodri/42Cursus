/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:11:11 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:18:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	h = (char *)haystack;
	i = 0;
	if (needle[i] == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (j + i) < len)
		{
			if (needle[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*str1 = "hola Mundo";
	char	*str2 = "";
	size_t	n = 20;
	printf("%s", ft_strnstr(str1, str2, n));
	printf("%s", strnstr(str1, str2, n));
} */