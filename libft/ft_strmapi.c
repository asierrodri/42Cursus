/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:14:03 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:14:03 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_f(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

int	main(void)
{
	char		*str = "hoAla mundo";
	char		*resultado;
	resultado = ft_strmapi(str, ft_f);
	printf("%s\n", resultado);
	return (0);
}*/