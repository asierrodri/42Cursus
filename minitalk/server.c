/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:36:51 by asirodri          #+#    #+#             */
/*   Updated: 2023/11/24 18:32:05 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_to_char(int signal)
{
	static unsigned char	c = 0;
	static int				i = 0;

	c = c | (signal == SIGUSR1);
	if (i == 8)
	{
		i = 0;
		if (!c)
		{
			ft_putchar_fd('\n', 0);
			return ;
		}
		else
		{
			ft_putchar_fd(c, 0);
			c = 0;
		}
	}
	else
		c = c << 1;
	i++;
}

int	main(void)
{
	pid_t	server_id;

	server_id = getpid();
	ft_putnbr_fd(server_id, 0);
	signal(SIGUSR1, ft_to_char);
	signal(SIGUSR2, ft_to_char);
	while (1)
		pause();
}
