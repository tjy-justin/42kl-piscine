/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <marvin@42.fr>                       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 05:44:27 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 05:44:27 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	alphac[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	specialc[] = "ABC áéíóú äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char	emptyc[] = "";
	char	*palphac;
	char	*pspecialc;
	char	*pempty;

	palphac = alphac;
	pspecialc = specialc;
	pempty = emptyc;
	printf("String ONLY contains alphabet characters: 1\n");
	printf("String does not contains only alpahabet characters: 0\n");
	printf("String contains empty character: 1\n");
	printf("\nAlphabet characters: %d\n", ft_str_is_alpha(palphac));
	printf("\nNon-alphabet: %d\n", ft_str_is_alpha(pspecialc));
	printf("\nEmpty character: %d\n", ft_str_is_alpha(pempty));
}
 */