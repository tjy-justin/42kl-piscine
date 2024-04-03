/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-02 12:57:13 by jhing             #+#    #+#             */
/*   Updated: 2024-04-02 12:57:13 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/* int	main(void)
{
	int	nb;
	int	power;

	nb = -2;
	power = 3;
	printf("%d", ft_recursive_power(nb, power));
} */
