/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:40:13 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 12:32:37 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_print_map(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		write(1, &map[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_change_map(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] != '\0')
	{
		while ((buf[i] != 'o' || buf[i] == '\n') && buf[i] != '\0')
			i++;
		if (buf[i] == 'o' )
		{
			buf[i] = '&';
		}
		i++;
	}
	ft_print_map(buf);
}
