/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:56:13 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 22:40:37 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[9] = {30,3,2,5,18,8,15,4,24};
	ft_sort_int_tab(tab, 9);
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", tab[i]); 
	}
}
