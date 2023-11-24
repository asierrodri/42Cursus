/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:53:46 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/28 17:22:38 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int	main(void)
{
    char	str[50] = "this string.h library function";
	char	s[50] = "this string.h library function";
	ft_bzero(str, 30);
	bzero(s, 30);
    for (int x = 0; x < 50; x++)
		printf("%c", str[x]);
	for (int a = 0; a < 50; a++)
		printf("%c", s[a]);
    return (0);
} */