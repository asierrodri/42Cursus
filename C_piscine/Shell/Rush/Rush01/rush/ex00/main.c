/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:21:51 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/23 17:56:34 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(char *cadena);

int	main(int argc, char *argv[])
{
	char	*cadena;

	cadena = "";
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		cadena = argv[1];
		rush01(cadena);
		return (0);
	}
}
