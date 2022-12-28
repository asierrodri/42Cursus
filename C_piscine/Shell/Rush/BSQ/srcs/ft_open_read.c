/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:33:22 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 13:32:42 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_open_read(char *map)
{
	int		fd;
	char	buf[5000];
	ssize_t	nr_bytes;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Map Error\n", 14);
	}
	else
	{
		nr_bytes = read(fd, buf, 5000);
		close(fd);
		if (nr_bytes == 0)
		{
			write(1, "Map Error\n", 14);
		}
		else
		{
			buf[nr_bytes] = '\0';
			ft_change_map(buf);
		}
	}
}
