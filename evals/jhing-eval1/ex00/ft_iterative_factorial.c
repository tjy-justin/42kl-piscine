/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-02 07:43:54 by jhing             #+#    #+#             */
/*   Updated: 2024-04-02 07:43:54 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		number *= nb--;
	}
	return (number);
}

/* int	main(void)
{
	int res;

	res = ft_iterative_factorial(10);
	printf("%d\n", res);

	return (0);
} */