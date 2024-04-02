/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:05:48 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/02 14:05:49 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		ft_putstr(argv[1]);
// 		printf("%s\n", argv[1]);
// 	}
// 	return (0);
// }