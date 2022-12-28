/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:41:18 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 23:16:21 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_print(char *number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		write (1, &number[i], 1);
		i++;
	}
	write (1, " ", 1);
	return (1);
}

int	ft_union(t_diccionary *dic, char *number)
{
	int	row;
	int	cha;
	int	flag;

	row = 0;
	while (row < 500000)
	{
		flag = 0;
		cha = 0;
		while (number[cha])
		{
			if (dic[row].number[cha] != number[cha])
				break ;
			if (number[cha + 1] == '\0' && dic[row].number[cha + 1] == '\0')
				flag = ft_print(dic[row].text);
			if (flag)
				return (0);
			cha++;
		}
		row++;
	}
	ft_print_dict_error();
	return (0);
}
