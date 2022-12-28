/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:29:31 by emunoz            #+#    #+#             */
/*   Updated: 2022/10/31 10:41:13 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

int	main(void)
{
	int	index;

	index = 3;
	printf("%d\t", ft_fibonacci(index));
	index = 4;
	printf("%d\t", ft_fibonacci(index));
	index = 5;
	printf("%d\t", ft_fibonacci(index));
	index = 6;
	printf("%d\t", ft_fibonacci(index));
	index = 7;
	printf("%d\t", ft_fibonacci(index));
	index = 8;
	printf("%d\t", ft_fibonacci(index));
	index = 9;
	printf("%d\t", ft_fibonacci(index));
	index = 10;
	printf("%d\n", ft_fibonacci(index));
}
