/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:35:22 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:53:19 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	result;

	int base, exponent;
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);
	result = ft_iterative_power(base, exponent);
	printf("%d raised to the power of %d is: %d\n", base, exponent, result);
	return (0);
}
