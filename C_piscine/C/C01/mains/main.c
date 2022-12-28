/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:14:54 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/18 19:20:12 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
