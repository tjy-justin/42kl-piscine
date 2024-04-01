/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 06:09:36 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 06:09:36 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char alphac[] = "abcdefghijklmnopqrstuvwxyz";
	char specialc[] = "ABcdefghijklmnopqrstuvwxyz_";
	char emptyc[] = "";
	char *palphac = alphac;
	char *pspecialc = specialc;
	char *pempty = emptyc;

	printf("String ONLY contains numeric characters: 1\n");
	printf("String does not contains only numeric characters: 0\n");
	printf("String contains empty character: 1\n");
	printf("\nNumeric characters: %d\n", ft_str_is_lowercase(palphac));
	printf("\nNon-numeric: %d\n", ft_str_is_lowercase(pspecialc));
	printf("\nEmpty character: %d\n", ft_str_is_lowercase(pempty));
} */