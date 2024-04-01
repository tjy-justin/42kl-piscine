/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:26:57 by tching            #+#    #+#             */
/*   Updated: 2024/04/01 18:02:10 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* C07 - EX02
 * Create a function ft_ultimate_range which allocates and
 * assigns an array of ints. This int array should contain all values between
 * min and max.
 * Min included - max excluded.
 * Here’s how it should be prototyped :
 * int ft_ultimate_range(int **range, int min, int max);
 * The size of range should be returned (or -1 on error).
 * If the value of min is greater or equal to max’s value,
 * range will point on NULL and it should return 0.*/

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	*ans;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = max - min;
	ans = malloc(sizeof(int) * x);
	if (ans == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ans;
	x = 0;
	while (max > min)
	{
		ans[x] = min;
		min++;
		x++;
	}
	return (x);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	x;

	x = 0;
	min = 1;
	max = 20;
	size = ft_ultimate_range(&tab, min, max);
	while (x < size)
	{
		printf("%d, ", tab[x++]);
	}
	return (0);
}
