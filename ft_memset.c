/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:03:26 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 18:42:19 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buc;

	i = 0;
	buc = (unsigned char *)b;
	while (i < len)
	{
		buc[i] = c;
		i++;
	}
	return (b = buc);
}
/*#include <stdio.h>

int main() {
    char str[50]; // Declare a character array
    int c = 'X'; // The character to set
    size_t len = 10; // Number of characters to set

    ft_memset(str, c, len);

    printf("Result after memset: %s\n", str);

    return 0;
} */
