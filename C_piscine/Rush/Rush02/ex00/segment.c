/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:11:41 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 22:33:09 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_zero(t_diccionary *dic, char seg_num[4][3])
{
	int	x;
	int	y;
	int	h;

	x = 0;
	y = 0;
	h = 1;
	while (x < 4)
	{
		y = 0;
		while (y < 3)
		{
			if (seg_num[x][y] != '0')
				h = 0;
			y++;
		}
		x++;
	}
	if (h == 1)
		ft_union(dic, "0");
}

void	ft_inter_array(int n_array, t_diccionary *dic)
{
	char	array[11];
	char	*p_array;
	int		x;

	x = 1;
	array[0] = '1';
	while (x < (n_array * 3) + 1)
	{
		array[x] = '0';
		x++;
	}
	array[x] = '\0';
	p_array = &array[0];
	if (p_array[1] != '\0')
		ft_union (dic, p_array);
}

void	ft_hundred(char n, t_diccionary *dic)
{
	char	hundred[4];
	char	number[2];
	char	*p_hundred;
	char	*p_number_hundred;

	number[0] = n;
	number[1] = '\0';
	hundred[0] = '1';
	hundred[1] = '0';
	hundred[2] = '0';
	hundred[3] = '\0';
	p_hundred = &hundred[0];
	p_number_hundred = &number[0];
	ft_union(dic, p_number_hundred);
	ft_union(dic, p_hundred);
}

int	ft_tens(char number1, char number2, t_diccionary *dic)
{
	char	tens[3];
	char	*p_tens;

	if (number1 == '1')
	{
		tens[0] = number1;
		tens[1] = number2;
		tens[2] = '\0';
		p_tens = &tens[0];
		ft_union(dic, p_tens);
		return (0);
	}
	else
	{
		tens[0] = number1;
		tens[1] = '0';
		tens[2] = '\0';
		p_tens = &tens[0];
		ft_union(dic, p_tens);
		return (1);
	}
}

void	ft_seg(char segment[3], int *p_a, int *p_n, t_diccionary *dic)
{
	char	number[2];
	char	*p_number;	

	if (segment[0] != '0' && segment[0] != '\0')
	{
		ft_hundred(segment[0], dic);
		*p_a = 1;
	}
	if (segment[1] != '0' && segment[1] != '\0')
	{
		*p_n = ft_tens(segment[1], segment[2], dic);
		*p_a = 1;
	}
	if (segment[2] != '0' && *p_n == 1)
	{
		number[0] = segment[2];
		number[1] = '\0';
		p_number = &number[0];
		ft_union(dic, p_number);
		*p_a = 1;
	}
}
