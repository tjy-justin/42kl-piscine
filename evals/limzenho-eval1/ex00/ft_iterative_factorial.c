/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:32:49 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:50:34 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	facto;

	i = 1;
	facto = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		facto *= i;
		++i;
	}
	return (facto);
}

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	num;
	int	factorial;

	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Factorial of a negative number is not defined.\n");
	}
	else
	{
		factorial = ft_iterative_factorial(num);
		printf("The factorial of %d is: %d\n", num, factorial);
	}
	return (0);
}
