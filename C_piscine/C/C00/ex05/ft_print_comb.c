/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft:print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:51:22 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/18 13:20:55 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
