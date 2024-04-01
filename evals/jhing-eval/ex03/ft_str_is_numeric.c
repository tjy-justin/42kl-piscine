/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <marvin@42.fr>                       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 05:59:17 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 05:59:17 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/* int	main(void)
{
	char numeric[] = "0123456789";
	char specialc[] = "0123456789_";
	char emptyc[] = "";
	char *pnumeric = numeric;
	char *pspecialc = specialc;
	char *pempty = emptyc;

	printf("String ONLY contains numeric characters: 1\n");
	printf("String does not contains only numeric characters: 0\n");
	printf("String contains empty character: 1\n");
	printf("\nNumeric characters: %d\n", ft_str_is_numeric(pnumeric));
	printf("\nNon-numeric: %d\n", ft_str_is_numeric(pspecialc));
	printf("\nEmpty character: %d\n", ft_str_is_numeric(pempty));
} */