/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:33:00 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:14:22 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (unsigned char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (&str[i]);
}

/* int	main(void)
{
	char	*str = "hola Mundo";
	int		c = 'j';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
	return (0);
} */