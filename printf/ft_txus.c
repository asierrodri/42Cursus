/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_txus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:37:21 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:18:26 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_txus(char c, va_list arg)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(arg, size_t), c);
	else if (c == 'd' || c == 'i')
		i = ft_putint(va_arg(arg, int));
	else if (c == 'u')
		i = ft_putint_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		i = ft_puthexa(va_arg(arg, unsigned int), c);
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}
