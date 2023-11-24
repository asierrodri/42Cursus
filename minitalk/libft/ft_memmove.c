/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:59:24 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:12:21 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (dst == 0 && src == 0)
		return (0);
	if (dst < src)
		d = ft_memcpy(dst, src, len);
	else
	{
		d = (char *)dst;
		s = (char *)src;
		while (len--)
			d[len] = s[len];
	}
	return (d);
}

/* int	main(void)
{
	char		dest[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	const char	src[] = "hhhhhhhazzzz";
	size_t		n = 4;
	char		*str = ft_memmove(dest, src, n);
	char		*s = memmove(dest, src, n);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
} */