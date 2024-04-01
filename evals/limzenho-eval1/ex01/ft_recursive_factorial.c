/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:42:46 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:52:06 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

#include <stdio.h>

int	ft_recursive_factorial(int nb);

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
		factorial = ft_recursive_factorial(num);
		printf("The factorial of %d is: %d\n", num, factorial);
	}
	return (0);
}
