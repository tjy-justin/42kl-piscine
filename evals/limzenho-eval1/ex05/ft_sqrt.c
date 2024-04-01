/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:54:41 by limzenho          #+#    #+#             */
/*   Updated: 2024/04/01 13:56:43 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		if (n * n == nb)
		{
			return (n);
		}
		else if (n > 43640)
		{
			return (0);
		}
		n++;
	}
	return (0);
}

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	num;
	int	result;

	printf("Enter a number to find its square root: ");
	scanf("%d", &num);
	result = ft_sqrt(num);
	if (result == 0)
	{
		printf("No integer square root exists for the entered number.\n");
	}
	else
	{
		printf("The square root of %d is: %d\n", num, result);
	}
	return (0);
}
