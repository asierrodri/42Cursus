/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42urduliz.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:33:55 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 18:50:53 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int		i;
			
	i = ft_strlen(str) -1;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\t", 1);
	return (str);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	 *str;

	i = 1;
	while(i < argc)
	{
		str = argv[i];
		printf("%s\n",ft_rev_print(str));
		i++;
	}
	return (0);
}


