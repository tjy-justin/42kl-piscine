/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:08:38 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/02 19:08:40 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// prime is division
// if < 2 != not prime

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return 0;
    while (i <= nb / 2) // i more than half cannot divide nb 
    {
        if (nb % i == 0) // nb has divisor other than 1 & nb
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int	main(void)
{
	int sqrt = ft_is_prime(5);

	printf("%d\n", sqrt);
	return (0);
}