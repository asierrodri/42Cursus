/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:57:16 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/24 13:11:14 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d", ft_str_is_printable("abdcññfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_printable("ADSGJSFSDLKFALS"));
	printf("\n%d", ft_str_is_printable("abdcf1hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_printable("abdcf@hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_printable(""));
}
