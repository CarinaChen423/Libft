/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:12:21 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 16:51:25 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>

int main() {
    int character1 = 'A';
    int character2 = 128;
    int character3 = '\t'; // tab character

    printf("'%c': ft_isascii returns %d\n", character1, ft_isascii(character1));
    printf("'%c': ft_isascii returns %d\n", character2, ft_isascii(character2));
    printf("'%c': ft_isascii returns %d\n", character3, ft_isascii(character3));

    return 0;
}*/
