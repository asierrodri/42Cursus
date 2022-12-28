/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:38:39 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 18:01:14 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a = 5;
	int	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
