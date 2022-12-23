/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:35:43 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:17:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	i;

	s = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (s);
	while (src[i] != 0 && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (s);
}

/* int	main(void)
{
	char	dst[] = "Hogfgfgfgf";
	char	s[] = "Hogfgfgfgf";
	char	src[] = "Cruevfvfvfvfl";
	size_t	dstsize = 5;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%zu\n", strlcpy(s, src, dstsize));
	return (0);
} */