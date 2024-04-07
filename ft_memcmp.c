/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:46 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 18:34:36 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hellp";
    size_t n = 5;

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("%zu \n", n);
    else if (result < 0)
        printf("%zu characters is in str1.\n", n);
    else
        printf("%zu characters is in str2.\n", n);

    return 0;
}*/
