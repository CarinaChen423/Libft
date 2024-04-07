/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:03:17 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 18:39:45 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}
/*#include <stdio.h>

int main() {
    char src[] = "This is the source string.";
    char dest[50]; // Make sure dest has enough space for the copied string
    size_t n = 10;

    ft_memmove(dest, src, n);

    printf("Copied string: %s\n", dest);

    return 0;
}*/
