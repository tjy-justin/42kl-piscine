/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:15:39 by etien             #+#    #+#             */
/*   Updated: 2024/03/28 17:46:35 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		*range = arr;
		return (i);
	}
}

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int *range;
    int size;
    int min = 5;
    int max = 9;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1) {
        printf("Memory allocation failed.\n");
        return 1;
    } else if (size == 0) {
        printf("Invalid range: min is greater than or equal to max.\n");
        return 1;
    }

    printf("Allocated range:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Don't forget to free the allocated memory
    free(range);

    return 0;
}

