/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:13:41 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:13:41 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_f(unsigned int i, char *str)
{
		*str = *str + i;
}
int	main(void)
{
	char	str[] = "HolaaaMundoo";
	ft_striteri(str, ft_f);
	printf("%s\n", str);
	return (0);
}*/