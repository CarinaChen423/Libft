/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:04 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 16:30:15 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    size_t len = sizeof(str);

    printf("Before ft_bzero: %s\n", str);

    // Call ft_bzero to zero out the memory
    ft_bzero(str, len);

    printf("After ft_bzero: %s\n", str);

    return 0;*/
