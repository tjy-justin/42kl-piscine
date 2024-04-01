/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:24:53 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:54:13 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int result;

	int base, exponent;
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);
	result = ft_recursive_power(base, exponent);
	printf("%d raised to the power of %d is: %d\n", base, exponent, result);
	return (0);
}