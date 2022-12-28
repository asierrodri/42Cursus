/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:07:00 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 13:02:39 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_arg_erros(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j > argc)
	{
		if (argv[j] == (void *)0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		j++;
	}
	return (0);
}
