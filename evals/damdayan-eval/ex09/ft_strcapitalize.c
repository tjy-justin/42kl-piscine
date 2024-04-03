/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:49:12 by damdayan          #+#    #+#             */
/*   Updated: 2024/04/03 15:42:30 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		count;

	ptr = str;
	count = 1;
	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && count == 1)
		{
			*ptr -= 32;
			count = 0;
		}
		else if (*ptr >= 'A' && *ptr <= 'Z' && count == 0)
			*ptr += 32;
		if (!(*ptr >= 'a' && *ptr <= 'z') && !(*ptr >= 'A' && *ptr <= 'Z')
			&& !(*ptr >= '0' && *ptr <= '9'))
			count = 1;
		else
			count = 0;
		ptr++;
	}
	return (str);
}

int	main(void)
{
	char	input[] = "+-    *# ABC";

	printf("%s\n", ft_strcapitalize(input));
}
