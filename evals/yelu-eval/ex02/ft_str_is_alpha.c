/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:44:41 by yelu              #+#    #+#             */
/*   Updated: 2024/03/28 16:58:24 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("Only alphabet, return 1: %d\n", ft_str_is_alpha("Abcdefghijkl"));
	printf("Other characters, return 0: %d\n", ft_str_is_alpha("abcdefghijk2l"));
	printf("Empty, return 1: %d\n", ft_str_is_alpha(""));
}

