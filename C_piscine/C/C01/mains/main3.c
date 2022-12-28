/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:47:53 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 18:26:32 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 8;
	int	b = 4;
	int div;
	int mod;


	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}
