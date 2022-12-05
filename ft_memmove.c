/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:59:24 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/04 21:34:03 by asirodri         ###   ########.fr       */
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
