/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <marvin@42.fr>                       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 05:25:36 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 05:25:36 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ftstrncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	{
		i = 0;
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
	}
}
/* int	main(void)
{
	char string1[] = "Hello World!";
	char string2[40];

	ftstrncpy(string2, string1, 30);
	printf("%s\n", string2);

	return (0);
} */