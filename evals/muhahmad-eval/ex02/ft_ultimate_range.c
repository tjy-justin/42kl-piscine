/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:03:37 by muhahmad          #+#    #+#             */
/*   Updated: 2024/04/03 15:23:40 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	int	size;

// 	// Test case 1: min is greater than or equal to max
// 	size = ft_ultimate_range(&arr, 10, 5);
// 	printf("Test Case 1: %s\n", size == 0 ? "Passed" : "Failed");
// 	// Test case 2: normal range
// 	size = ft_ultimate_range(&arr, 5, 10);
// 	printf("Test Case 2: %s\n", size > 0 ? "Passed" : "Failed");
// 	// Test case 3: memory allocation failure
// 	size = ft_ultimate_range(&arr, 1000000000, 2000000000);
// 	printf("Test Case 3: %s\n", size == -1 ? "Passed" : "Failed");
// 	free(arr);
// 	return (0);
// }
