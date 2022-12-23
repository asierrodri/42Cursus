/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:17:27 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:17:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* int	main(void)
{
	char	*s1 = "Hola Mundo";
	char	*s3 = "Hola Mundo";
	char	*s2 = "Cruel";
	size_t	size = 7;
	printf("%zu\n", ft_strlcat(s1, s2, size));
	printf("%zu\n", strlcat(s3, s2, size));
	return (0);
} */