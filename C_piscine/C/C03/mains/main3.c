/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:38:13 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/25 15:56:41 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[] = " Mundo";
	char	dest[] = "Hola";
	printf("%s", ft_strncat(dest, src, 3));
	printf("\n%s", ft_strncat(dest, src, 5));
	printf("\n%s", ft_strncat(dest, src, 7));
}
