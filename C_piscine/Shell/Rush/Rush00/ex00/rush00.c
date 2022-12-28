/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eochoa-d <eochoa-d@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:28:32 by eochoa-d          #+#    #+#             */
/*   Updated: 2022/10/16 19:41:33 by eochoa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		width++;
	}
	ft_putchar('\n');
}

void	ft_print_middle_lines(int x, int y)
{
	int	height;
	int	width;

	height = 1;
	while (height <= y - 2)
	{
		width = 1;
		while (width <= x)
		{
			if (width == 1 || width == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			width++;
		}
		height++;
		ft_putchar('\n');
	}
}

void	ft_print_last_line(int x, int y)
{
	int	height;

	height = 2;
	while (height <= y)
	{
		if (height == y)
			ft_print_first_line(x);
		height++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_first_line(x);
	ft_print_middle_lines(x, y);
	ft_print_last_line(x, y);
}
