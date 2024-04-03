/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:11:46 by muhahmad          #+#    #+#             */
/*   Updated: 2024/04/03 15:16:44 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;
	int	value;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc((size + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	value = min;
	while (value < max)
	{
		array[i] = value;
		i++;
		value++;
	}
	return (array);
}

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*result;

	min = 0;
	max = 5;
	i = 0;
	result = ft_range(min, max);
	if (result != NULL)
	{
		while (i < max - min)
			printf("%d ", result[i++]);
		printf("\n");
	}
	else
		printf("Null pointer returned. Min value is greater or equal to max value.\n");
	return (0);
}
