/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 06:26:50 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 06:26:50 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char alphac[] = "printable text";
	char specialc[] = "unprintable text: \t \a ";
	char emptyc[] = "";
	char *palphac = alphac;
	char *pspecialc = specialc;
	char *pempty = emptyc;

	printf("String ONLY contains printable characters: 1\n");
	printf("String does not contains only printable characters: 0\n");
	printf("String contains empty character: 1\n");
	printf("\nNumeric characters: %d\n", ft_str_is_printable(palphac));
	printf("\nNon-numeric: %d\n", ft_str_is_printable(pspecialc));
	printf("\nEmpty character: %d\n", ft_str_is_printable(pempty));
} */