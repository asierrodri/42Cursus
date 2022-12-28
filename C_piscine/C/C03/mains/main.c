/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:05:38 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/25 17:50:43 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d", ft_strcmp("                ", "z"));
	printf("\n%d", ft_strcmp("Ho12", "Ho21"));
	printf("\n%d", ft_strcmp("Ho", "Hola"));
	printf("\n%d", ft_strcmp("Hola", "Hola"));
}
