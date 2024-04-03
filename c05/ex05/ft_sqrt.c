/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:08:43 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/03 00:12:50 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1, 4, 9, 16, 25, 36, 49, 64

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int fibo = ft_sqrt(64);

	printf("%d\n", fibo);
	return (0);
}