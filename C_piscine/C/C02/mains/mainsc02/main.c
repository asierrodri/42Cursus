/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:22:03 by asirodri          #+#    #+#             */
/*   Updated: 2022/11/03 17:23:43 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Hola";
	char	src1[] = "Hola";
	char	dest[] = "Mundo";
	char	dest1[] = "Mundo";

	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src1));
	printf("%s", strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}
