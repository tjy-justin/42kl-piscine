/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:00:25 by muhahmad          #+#    #+#             */
/*   Updated: 2024/04/03 14:44:39 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc declares sizeof, as pointer, length

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		length;

	length = ft_strlen(src);
	str = (char *)malloc((length + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	return (ft_strcpy(str, src));
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*new_str;

	str = "Testing";
	new_str = ft_strdup(str);
	if (new_str != NULL)
	{
		printf("Duplicated string: %s\n", new_str);
		free(new_str);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
