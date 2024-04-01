/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:05:55 by alow              #+#    #+#             */
/*   Updated: 2024/04/01 13:37:24 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (to_find[i] != '\0' && str[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "Hello test string";
	char	to_find[] = "lo";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s\n", result);
}
