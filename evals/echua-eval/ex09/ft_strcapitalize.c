/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:20:31 by echua             #+#    #+#             */
/*   Updated: 2024/04/03 17:10:35 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a')
			|| c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "    &* -+ 345 __ sjfjskf";

	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
