/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:03:07 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 18:37:23 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dst);
}
/*#include <stdio.h>

int main() {
    char src[] = "This is the source string.";
    char dest[50]; // Make sure dest has enough space for the copied string
    size_t n = 10;

    ft_memcpy(dest, src, n);

    printf("Copied string: %s\n", dest);

    return 0;
}*/
