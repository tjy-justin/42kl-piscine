/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:45 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/31 14:33:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// printable is >= 32 <= 126
// use echo -e to print unprintable
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
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
	int	illegal;

	if (argc == 2)
	{
		illegal = ft_str_is_printable(argv[1]);
		printf("%d\n", illegal);
	}
}
