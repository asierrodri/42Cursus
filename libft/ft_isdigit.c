/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:41:17 by asirodri          #+#    #+#             */
/*   Updated: 2022/12/23 17:14:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	while (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	int	c = '9';
	printf("%d\n", ft_isdigit(c));
	return (0);
}
 */