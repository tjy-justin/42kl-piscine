/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:39:46 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:54:50 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	n;
	int	result;

	printf("Enter the index of the Fibonacci sequence: ");
	scanf("%d", &n);
	result = ft_fibonacci(n);
	if (result == -1)
	{
		printf("Fibonacci sequence is not defined for negative index.\n");
	}
	else
	{
		printf("The value at index %d in the Fibonacci sequence is: %d\n", n,
			result);
	}
	return (0);
}
