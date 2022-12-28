/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:04:41 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/25 18:29:57 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Eneko quiere un camion amarillo";
	char	to_find[] = "un";

	printf("%s", ft_strstr(str, to_find));
}
