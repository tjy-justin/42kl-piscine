/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:30:45 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 16:53:20 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	comp;

	if (argc == 3)
	{
		comp = ft_strcmp(argv[1], argv[2]);
		printf("%d\n", comp);
	}
	return (0);
}
