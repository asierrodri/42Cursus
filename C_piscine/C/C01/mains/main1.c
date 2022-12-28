/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:22:03 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 11:17:13 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********nbr;
	int	********nbr1;
	int	*******nbr2;
	int ******nbr3;
	int	*****nbr4;
	int	****nbr5;
	int	***nbr6;
	int	**nbr7;
	int *nbr8;
	int	number;

	number = 50;
	nbr = &nbr1;
	nbr1 = &nbr2;
	nbr2 = &nbr3;
	nbr3 = &nbr4;
	nbr4 = &nbr5;
	nbr5 = &nbr6;
	nbr6 = &nbr7;
	nbr7 = &nbr8;
	nbr8 = &number;
	ft_ultimate_ft(nbr);
	printf("%d", number);
}
