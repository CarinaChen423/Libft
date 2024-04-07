/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:11 by zhchen            #+#    #+#             */
/*   Updated: 2024/03/16 16:34:19 by zhchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
/*#include <stdio.h>

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    size_t total_size = num_elements * element_size;

    // Call ft_calloc to allocate memory for an array of integers
    int *arr = (int *)ft_calloc(num_elements, element_size);

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the allocated array
    printf("Array after ft_calloc:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;}*/
