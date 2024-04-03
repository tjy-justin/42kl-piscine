/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:36:01 by echua             #+#    #+#             */
/*   Updated: 2024/04/03 17:05:17 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*i;

	i = dest;
	while (*src != 0 && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hi Guys!";
	char	dest[5];

	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
