/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:05:43 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/02 14:05:45 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		ft_strlen(argv[1]);
// 		printf("%s\n", argv[1]);
// 	}
// 	return (0);
// }