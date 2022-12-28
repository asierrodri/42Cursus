/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eochoa-d <eochoa-d@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:51:21 by eochoa-d          #+#    #+#             */
/*   Updated: 2022/10/16 19:52:34 by eochoa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static int	g_height = 0;

static int	g_width;

void	first_line(int x)
{
	while (g_height == 0)
	{
		g_width = 0;
		while (g_width < x)
		{
			if (g_width == 0 || g_width == x - 1)
			{
				ft_putchar ('A');
				g_width++;
			}
			else
			{
				ft_putchar('B');
				g_width++;
			}
		}
		g_height++;
		ft_putchar('\n');
	}
}

void	mid_lines(int x, int y)
{
	while (g_height > 0 && g_height < y - 1)
	{
		g_width = 0;
		while (g_width < x)
		{
			if (g_width == 0 || g_width == x - 1)
			{
				ft_putchar('B');
				g_width++;
			}
			else
			{
				ft_putchar(' ');
				g_width++;
			}
		}
		g_height++;
		ft_putchar('\n');
	}
}

void	last_line(int x, int y)
{
	while (g_height == y - 1)
	{
		g_width = 0;
		while (g_width < x)
		{
			if (g_width == 0 || g_width == x - 1)
			{
				ft_putchar('C');
				g_width++;
			}
			else
			{
				ft_putchar('B');
				g_width++;
			}
		}
		g_height++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	first_line(x);
	mid_lines(x, y);
	last_line(x, y);
}
