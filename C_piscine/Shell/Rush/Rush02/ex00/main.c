/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:41:09 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 23:15:36 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_len_number(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		i++;
	}
	if (i < 12)
		return (1);
	return (0);
}

int	check_number(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *number)
{
	int				i;
	long long		result;
	unsigned int	n;

	n = 2147483647;
	i = 0;
	result = 0;
	while (number[i] != '\0')
	{
		while (number[i] >= '0' && number[i] <= '9')
		{
			result = 10 * result + number[i] - '0';
			i++;
		}
	}
	if (result > n)
		return (0);
	return (1);
}

void	ft_argv_zero(char	**argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		argv[0][i] = '\0';
		i++;
	}
}

int	main(int argc, char	**argv)
{
	char			*number;
	char			*dic_name;
	t_diccionary	t_diccionary[5000];

	ft_argv_zero(argv);
	dic_name = "numbers.dict";
	if (argc == 2)
		number = argv[1];
	else if (argc == 3)
	{
		dic_name = argv[1];
		number = argv[2];
	}
	else
	{
		write (2, "Error\n", 6);
		return (0);
	}
	if (check_number(number) && ft_atoi(number) && ft_len_number(number))
		ft_number(number, diccionary_upload(t_diccionary, dic_name));
	else
		write (2, "Error\n", 6);
	return (0);
}	
