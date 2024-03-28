/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:55:55 by etien             #+#    #+#             */
/*   Updated: 2024/03/28 17:42:10 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void) {
    int min = 0;
    int max = 10;
    int *result = ft_range(min, max);

    if (result == NULL) {
        printf("Result is NULL. min is greater than or equal to max.\n");
    } else {
        printf("Result array: ");
        for (int i = 0; i < max - min; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        // Don't forget to free the allocated memory
        free(result);
    }

    return 0;
}

