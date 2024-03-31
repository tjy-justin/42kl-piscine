/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:41 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/31 14:37:27 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	upcase;

	if (argc == 2)
	{
		upcase = ft_str_is_uppercase(argv[1]);
		printf("%d\n", upcase);
	}
	return (0);
}
