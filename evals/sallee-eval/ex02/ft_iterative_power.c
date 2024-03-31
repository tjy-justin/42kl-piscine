/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:12:47 by sallee            #+#    #+#             */
/*   Updated: 2024/03/30 18:05:26 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power-- > 1)
	{
		result *= nb;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));
	return (0);
}
