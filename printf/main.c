/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:46:30 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:37:47 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char			c  = '0';
	char			*s = "hola";
	void			*p = "1";
	int				d  = 11;
	int				i  = 12;
	unsigned int	u  = 13;
	unsigned int	x  = 14;
	unsigned int	X  = 15;

	printf("Char\n");
	printf("Original\t" "%c\n", c);
	ft_printf("Mine\t\t" "%c\n", c);
	printf("\nString\n");
	printf("Original\t" "%s\n", s);
	ft_printf("Mine\t\t" "%s\n", s);
	printf("\nPointer\n");
	printf("Original\t" "%p\n", p);
	ft_printf("Mine\t\t" "%p\n", p);
	printf("\nDecimal\n");
	printf("Original\t" "%d\n", d);
	ft_printf("Mine\t\t" "%d\n", d);
	printf("\nInt\n");
	printf("Original\t" "%i\n", i);
	ft_printf("Mine\t\t" "%i\n", i);
	printf("\nUnsigned decimal\n");
	printf("Original\t" "%u\n", u);
	ft_printf("Mine\t\t" "%u\n", u);
	printf("\nHexa min\n");
	printf("Original\t" "%x\n", x);
	ft_printf("Mine\t\t" "%x\n", x);
	printf("\nHexa mayus\n");
	printf("Original\t" "%X\n", X);
	ft_printf("Mine\t\t" "%X\n", X);
	printf("\nPorcentaje\n");
	printf("Original\t" "%%\n");
	ft_printf("Mine\t\t" "%%\n");
	return (0);
}
