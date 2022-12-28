/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:20:30 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 14:08:31 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int	*b;
	int	x = 2;
	int	y = 4;

	a = &x;
	b = &y;

	ft_swap(a, b);
	printf("%d\n", x);
	printf("%d", y);
}
