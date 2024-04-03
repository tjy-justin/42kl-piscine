/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:32:11 by isgoh             #+#    #+#             */
/*   Updated: 2024/04/03 13:52:25 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a / *b;
	b1 = *a % *b;
	*a = a1;
	*b = b1;
}

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	dividend;
	int	divisor;

	dividend = 10;
	divisor = 3;
	printf("Initial values: a = %d, b = %d\n", dividend, divisor);
	ft_ultimate_div_mod(&dividend, &divisor);
	printf("After division: a = %d, b = %d\n", dividend, divisor);
	return (0);
}
