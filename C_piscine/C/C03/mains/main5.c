/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:09:46 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/26 15:10:28 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "";
	unsigned int	size;

	size = 0;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}
