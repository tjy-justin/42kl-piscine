/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:43:54 by yelu              #+#    #+#             */
/*   Updated: 2024/03/28 17:26:18 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	printf("Printable, return 1: %d\n", ft_str_is_printable("@Aa!~i*9&^"));
	printf("I don't know how to print unprintable characters\n");
	printf("Empty, return 1: %d\n", ft_str_is_printable(""));
}

