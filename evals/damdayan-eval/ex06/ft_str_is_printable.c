/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:59:20 by damdayan          #+#    #+#             */
/*   Updated: 2024/04/03 15:37:22 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("%i\n", ft_str_is_printable("H3Lp"));
	printf("%i\n", ft_str_is_printable("˙∆©∂"));
	printf("%i\n", ft_str_is_printable(" "));
}
