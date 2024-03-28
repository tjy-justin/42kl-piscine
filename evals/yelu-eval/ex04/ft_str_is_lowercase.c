/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:55:02 by yelu              #+#    #+#             */
/*   Updated: 2024/03/28 17:03:05 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("All lowercase, return 1: %d\n", ft_str_is_lowercase("aaaaa"));
	printf("Other chars, return 0: %d\n", ft_str_is_lowercase("aa@@aa"));
	printf("Empty, return 1: %d\n", ft_str_is_lowercase(""));
}

