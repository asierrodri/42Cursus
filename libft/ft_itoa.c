/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:48:00 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 18:48:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char            *str;
    unsigned int    num;
    size_t          i;


    str = (char *)malloc(ft_intlen(n) + 1);
    if (!str)
        return (0);
    i = ft_intlen(n);
    if (n == 0)
        str[0] = 0;
    if (n < 0)
    {
        num = n * -1;
        str[0] = '-';
    }
    else
        num = n;
    while ( num > 0)
    {
		str[i - 1] = 48 + (num % 10);
        num /= 10;
		i--;
    }
    str[ft_intlen(n)] = '\0';
    return (str);
}

int main(void)
{
    int c = -12321435;

    printf("%s\n", ft_itoa(c));
    return (0);
}