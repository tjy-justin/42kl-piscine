/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 08:20:05 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 08:20:05 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
/* int	main(void)
{
	char original[] = "salut,comment tu vas ?
	42mots quarante-deux; cinquante+et+un";

	printf("Original string: %s\n", original);
	printf("Changes made: %s\n", ft_strcapitalize(original));
	return (0);
} */