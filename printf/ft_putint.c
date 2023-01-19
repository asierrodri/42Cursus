/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:19:22 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/17 17:19:22 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	int				i;
	unsigned int	num;

	i = 0;
	if (n < 0)
	{
		i = ft_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num > 9)
		i += ft_putint(num / 10);
	i += ft_putchar(num % 10 + '0');
	return (i);
}
