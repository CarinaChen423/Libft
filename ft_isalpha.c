/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:12:05 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 16:47:36 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main() {
    int character1 = 'A';
    int character2 = '5';
    int character3 = '*';

    printf(%c, %d, character1, ft_isalpha(character1));
    printf(%c, %d, character2, ft_isalpha(character2));
    printf(%c, %d, character3, ft_isalpha(character3));

    return 0;
}*/
