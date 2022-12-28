/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:15:37 by emunoz            #+#    #+#             */
/*   Updated: 2022/10/31 16:53:14 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1 || nb >= 2147483647)
		return (0);
	div = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	main(void)
{
	int	nb;

	nb = 3;
	printf("%d\t", ft_is_prime(nb));
	nb = 4;
	printf("%d\t", ft_is_prime(nb));
	nb = 5;
	printf("%d\t", ft_is_prime(nb));
	nb = 6;
	printf("%d\t", ft_is_prime(nb));
	nb = 7;
	printf("%d\t", ft_is_prime(nb));
	nb = 8;
	printf("%d\t", ft_is_prime(nb));
	nb = 9;
	printf("%d\t", ft_is_prime(nb));
	nb = 10;
	printf("%d\n", ft_is_prime(nb));
}
