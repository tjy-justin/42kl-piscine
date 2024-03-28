/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:25:57 by yelu              #+#    #+#             */
/*   Updated: 2024/03/28 17:04:16 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("Only uppercase, return 1: %d\n", ft_str_is_uppercase("AAAAAA"));
	printf("Other characters, return 0: %d\n", ft_str_is_uppercase("aaaa!!!"));
	printf("Space, return 1: %d\n", ft_str_is_uppercase(""));
}

