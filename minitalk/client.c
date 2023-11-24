/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:37:08 by asirodri          #+#    #+#             */
/*   Updated: 2023/11/24 18:36:31 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

int	ft_to_bytes(char *str, pid_t server_id)
{
	int	i;
	int	j;
	int	bit;

	j = 0;
	while (str[j])
	{
		i = 8;
		while (i > 0)
		{
			bit = (str[j] >> i) & 1;
			if (bit == 0)
			{
				if (kill(server_id, SIGUSR1) == -1)
					return (printf("Error pid\n"));
			}
			else
			{
				if (kill(server_id, SIGUSR2) == -1)
					return (printf("Error pid\n"));
			}
			usleep(1000);
			i--;
		}
		j++;
	}
	i = 8;
	while (i--)
	{
		if (kill(server_id, SIGUSR2) == -1)
			return (1);
		usleep(100);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	pid_t	server_id;
	int		i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (argv[1][i] < 48 || argv[1][i] > 57)
			{
				ft_putstr_fd("Error", 1);
				return (0);
			}
			i++;
		}
		server_id = ft_atoi(argv[1]);
		ft_to_bytes(argv[2], server_id);
	}
	else
		ft_putstr_fd("Error", 1);
}
