/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:38 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/31 14:38:11 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	int	lowcase;

	if (argc == 2)
	{
		lowcase = ft_str_is_lowercase(argv[1]);
		printf("%d\n", lowcase);
	}
	return (0);
}
