/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:50:56 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:14:14 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (str1[i] != '\0')
		&& (str2[i] != '\0') && (i < (n - 1)))
			i++;
	return (str1[i] - str2[i]);
}

/* int	main(void)
{
	char	*str1 = "hola Mundo";
	char	*str2 = NULL;
	size_t	n = 5;
	printf("%d", ft_strncmp(str1, str2, n));
	printf("%d", strncmp(str1, str2, n));
}
 */