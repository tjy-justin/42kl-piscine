/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawal <mawal@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:22:33 by mawal             #+#    #+#             */
/*   Updated: 2024/03/25 14:57:53 by mawal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* remove to try the main
int	main(void)
{
	char	source [] = "Yeay Copied!";
	char	destination[sizeof(source)];

	ft_strcpy(destination, source);
	printf("Source: %s. ", source);
	printf("Destination: %s.\n", destination);
}*/
