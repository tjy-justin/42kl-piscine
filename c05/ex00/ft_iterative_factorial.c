/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:09:00 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/03 00:05:54 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0) // no neg factorial as n! = n*(n-1)!
		return (0);
	else if (nb == 0)
		return (num);
	while (nb > 0)
		num *= nb--; // this is *= nb && nb--
	return (num);
}

#include <stdio.h>

int	main(void)
{
	int factorial = ft_iterative_factorial(5);

	printf("%d\n", factorial);
	return (0);
}