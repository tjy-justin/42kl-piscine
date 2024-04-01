/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:10:15 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/01 11:37:15 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{ // compare from 0 to n-1
		i++;
	}
	if (s1[i] == s2[i] || n <= 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	int	comp;

// 	if (argc == 3)
// 	{
// 		comp = ft_strncmp(argv[1], argv[2], 20);
// 		printf("%d\n", comp);
// 	}
// 	return (0);
// }
