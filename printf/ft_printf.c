/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:27:20 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:25:27 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	while (*str)
	{
		if (*str != '%')
			i += ft_putchar(*str);
		else
		{
			str++;
			i += ft_txus(*str, arg);
		}
		str++;
	}
	va_end(arg);
	return (i);
}
