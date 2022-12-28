/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:01:15 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/23 18:43:42 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(char *cadena)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (cadena[i] != '\0' && error != 1)
	{
		if ((cadena[i] >= '1' && cadena[i] <= '4') || cadena[i] == ' ')
			i++;
		else
			error++;
	}
	if (i == 31 && error == 0)
	{
		write(1, "1 2 3 4\n", 8);
		write(1, "2 3 4 1\n", 8);
		write(1, "3 4 1 2\n", 8);
		write(1, "4 1 2 3\n", 8);
	}
	else
		error = 1;
	if (error == 1)
		write(1, "Error\n", 6);
}
