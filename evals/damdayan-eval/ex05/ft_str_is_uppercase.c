/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damdayan <damdayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:52:04 by damdayan          #+#    #+#             */
/*   Updated: 2024/03/30 15:57:53 by damdayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	printf("%i\n", ft_str_is_uppercase("YES"));
	printf("%i\n", ft_str_is_uppercase("N00"));
	printf("%i\n", ft_str_is_uppercase("Noo"));
}
*/
