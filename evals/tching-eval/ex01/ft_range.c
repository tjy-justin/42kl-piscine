/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:10:26 by tching            #+#    #+#             */
/*   Updated: 2024/04/01 17:59:42 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function ft_range which returns an array of ints.
 * This int array should contain all values between min and max.
 * Min included - max excluded.
 * Here’s how it should be prototyped :
	int *ft_range(int min, int max);
 * If min´value is greater or equal to max’s value,
 * a null pointer should be returned.*/

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*ans;

	if (min >= max)
		return (NULL);
	x = max - min;
	ans = (int *)malloc(sizeof(int) * x);
	if (ans == NULL)
		return (NULL);
	x = 0;
	while (max > min)
	{
		ans[x] = min;
		min++;
		x++;
	}
	return (ans);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	x;

	min = 1;
	max = 12;
	tab = ft_range(min, max);
	size = max - min;
	x = 0;
	while (x < size)
	{
		printf("%d, ", tab[x++]);
	}
	return (0);
}
