/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:51:39 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:26:48 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t n, char c)
{
	int	i;

	i = 0;
	if (c == 'x' || c == 'p')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, c);
		i += ft_putchar("0123456789abcdef"[n % 16]);
	}
	if (c == 'X')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, c);
		i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}
