/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:46:38 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/20 09:37:24 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	store;
	int	current;

	current = 0;
	while (current <= size)
	{
		start = 0;
		while (start <= size)
		{	
			if (tab[start] > tab[current])
			{
				store = tab[start];
				tab[start] = tab[current];
				tab[current] = store;
			}
				start++;
		}
		current++;
	}	
}
