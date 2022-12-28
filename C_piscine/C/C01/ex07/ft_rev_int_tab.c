/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:20:12 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/20 09:36:46 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	store;
	int	start;

	start = 0;
	while (start <= size -1)
	{
		store = tab[start];
		tab[start] = tab[size - 1];
		tab[size - 1] = store;
		start++;
		size--;
	}
}
