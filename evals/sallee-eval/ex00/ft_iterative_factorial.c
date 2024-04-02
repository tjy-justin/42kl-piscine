/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:03:11 by sallee            #+#    #+#             */
/*   Updated: 2024/04/02 21:34:59 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (result);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		result *= nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int number;
// 	printf("Enter a number to calculate its factorial: ");
// 	scanf("%d", &number);

// 	int factorial = ft_iterative_factorial(number);
// 	printf("Factorial of %d is: %d\n", number, factorial);

// 	return (0);
// }