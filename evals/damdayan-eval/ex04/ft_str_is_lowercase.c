/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damdayan <damdayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:41:03 by damdayan          #+#    #+#             */
/*   Updated: 2024/03/30 15:50:56 by damdayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("idk"));
	printf("%i\n", ft_str_is_lowercase("h1"));
	printf("%i\n", ft_str_is_lowercase("iDk"));
}
*/
