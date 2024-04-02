/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:59:05 by sallee            #+#    #+#             */
/*   Updated: 2024/04/02 21:38:43 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(100000000));
	printf("%d\n", ft_sqrt(289));
	printf("%d\n", ft_sqrt(11));
	return (0);
}
