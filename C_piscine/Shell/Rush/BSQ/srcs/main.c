/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:31:59 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 16:13:42 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	main(int argc, char *argv[])
{
	int		i;
	char	*map;
	int		j;

	i = 1;
	j = argc;
	map = "./maps/map2";
	if (i <= j)
	{
		if (argc == 1)
		{
			ft_open_read(map);
		}
		ft_arg_erros(argc, argv);
		while (i < argc)
		{
			ft_open_read(argv[i]);
				i++;
		}
	}
	return (0);
}
