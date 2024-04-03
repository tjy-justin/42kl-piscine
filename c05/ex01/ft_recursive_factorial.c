/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:08:58 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/03 00:08:30 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0) // no neg factorial
		return (0);
	else if (nb == 0)
		return (1);
	else // n! = n*(n-1)!
		return (nb * ft_recursive_factorial(nb - 1));
	// apparently can't --nb
}

#include <stdio.h>

int	main(void)
{
	int factorial = ft_recursive_factorial(5);

	printf("%d\n", factorial);
	return (0);
}