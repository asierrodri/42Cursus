/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:49:59 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 16:35:54 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0 || nb > 13)
		return (0);
	fat = 1;
	while (nb > 1)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}

int	main(void)
{
	int	nb;

	nb = 12;
	printf("2147483647");
	printf("\n%d\n", ft_iterative_factorial(nb));
}
