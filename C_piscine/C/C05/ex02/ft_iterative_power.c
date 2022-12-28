/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:12:34 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 16:38:26 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	if (power < 0)
		j = 0;
	return (j);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 8;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}
