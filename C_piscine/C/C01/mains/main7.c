/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:03:10 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 21:51:35 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[7] = {0, 1, 2, 3, 4, 5, 6};
	int	size = 7;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	return (0);
}
