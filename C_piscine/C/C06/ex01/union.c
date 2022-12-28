/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:51:38 by asirodri          #+#    #+#             */
/*   Updated: 2022/11/02 12:55:43 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_union(char *s1)
{
	char	str[100] = "";
	int		i;
	int		k;

	i = 0;
	while (s1[i] != '\0')
	{
		while (k <= 100)
		{
		if (s1[i] != str[k])
		{
			str[k] = s1[i];
			write (1, &str[k], 1);
			k = 0;
		}
		k++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_union(argv[1]);
	}
	else
		write(1, "\n", 1);
}
