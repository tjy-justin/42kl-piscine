/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 08:37:46 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 17:02:19 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	temp_i;

	i = 0;
	j = 0;
	if (!(to_find[j]))
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			temp_i = i;
			while (str[temp_i] == to_find[j] && to_find[j])
			{
				temp_i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*result;
	char	*result2;

	str = "I am your";
	to_find = "youre";
	result = ft_strstr(str, to_find);
	result2 = strstr(str, to_find);
	printf("Using ft_strstr:\nResulted string: %s\n", result);
	printf("Using strstr:\nResulted string: %s\n", result2);
}
