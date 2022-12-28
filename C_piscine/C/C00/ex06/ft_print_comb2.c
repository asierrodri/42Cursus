/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:59:26 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/18 13:21:23 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int uno, int dos)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (uno / 10 + '0');
	b = (uno % 10 + '0');
	c = (dos / 10 + '0');
	d = (dos % 10 + '0');
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (uno != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	uno;
	int	dos;

	uno = 0;
	while (uno < 99)
	{
		dos = uno + 1;
		while (dos <= 99)
		{
			ft_putchar(uno, dos);
			dos++;
		}
		uno++;
	}
}
