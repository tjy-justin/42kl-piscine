/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:18:47 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:57:31 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;
	int	prime_pos;
	int	prime_neg;

	n = 0;
	prime_pos = 0;
	prime_neg = 0;
	if (nb <= 1)
	{
		return (0);
	}
	else if (nb == 2 || nb == 3)
	{
		return (1);
	}
	while (n != nb)
	{
		if (6 * n - 1 == nb || 6 * n + 1 == nb)
		{
			return (1);
		}
		n++;
	}
	return (0);
}

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	num;
	int	result;

	printf("Enter a number to check if it's prime: ");
	scanf("%d", &num);
	result = ft_is_prime(num);
	if (result == 1)
	{
		printf("%d is a prime number.\n", num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}
	return (0);
}
