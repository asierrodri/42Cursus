/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:44:08 by emunoz            #+#    #+#             */
/*   Updated: 2022/10/31 11:12:36 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	nb;

	nb = 3;
	printf("%d\t", ft_sqrt(nb));
	nb = 4;
	printf("%d\t", ft_sqrt(nb));
	nb = 5;
	printf("%d\t", ft_sqrt(nb));
	nb = 6;
	printf("%d\t", ft_sqrt(nb));
	nb = 7;
	printf("%d\t", ft_sqrt(nb));
	nb = 8;
	printf("%d\t", ft_sqrt(nb));
	nb = 9;
	printf("%d\t", ft_sqrt(nb));
	nb = 10;
	printf("%d\n", ft_sqrt(nb));
}
