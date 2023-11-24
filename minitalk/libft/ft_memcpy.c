/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:40:57 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:12:18 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/* int	main(void)
{
	char		dest[] = "aaaaa";
	const char	src[] = "hhhhhhhazzzz";
	size_t		n = 20;
	char		*str = ft_memcpy(dest, src, n);
	char		*s = memcpy(dest, src, n);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
}
 */