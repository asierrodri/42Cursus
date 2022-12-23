/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:57:18 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:00:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)malloc(count * size);
	if (str == 0)
		return (0);
	while (i < count * size)
		str[i++] = '\0';
	return (str);
}

/* int	main(void)
{
	size_t	count = 20;
	size_t	size = 2;
	char	*str;
	char	*s;
	str = ft_calloc(count, size);
	s = calloc(count, size);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
} */