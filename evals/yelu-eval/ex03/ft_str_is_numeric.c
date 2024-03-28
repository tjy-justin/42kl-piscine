/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:31:50 by yelu              #+#    #+#             */
/*   Updated: 2024/03/28 17:00:12 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("Only digit, 1: %d\n", ft_str_is_numeric("44444"));
	printf("Other characters, 0: %d\n", ft_str_is_numeric("988a"));
	printf("Empty, 1: %d\n", ft_str_is_numeric(""));
	printf("Number, %d\n", ft_str_is_numeric("01948987493"));
}

