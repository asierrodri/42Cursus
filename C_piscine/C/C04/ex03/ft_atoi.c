/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:12:27 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/31 16:34:45 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_spaces(char *str, int *ptr_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = ft_spaces(str, &i);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		printf("%d", ft_atoi(str));
	}
	else
		printf("Error\n");
	return (0);
}
