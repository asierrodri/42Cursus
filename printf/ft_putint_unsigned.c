/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:51:53 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:26:29 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint_unsigned(unsigned int n)
{
	int				i;

	i = 0;
	if (n > 9)
		i += ft_putint_unsigned(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
