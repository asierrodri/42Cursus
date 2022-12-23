/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:37:29 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:16:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char		str[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	int			c = 'z';
	size_t		n = 20;
	char		*s = ft_memset(str, c, n);
	char		*s1 = memset(str, c, n);
	printf("%s\n", s);
	printf("%s\n", s1);
	return (0);
} */