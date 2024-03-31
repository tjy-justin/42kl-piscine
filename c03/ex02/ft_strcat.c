/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:08:27 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/31 15:08:48 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src) // concatenate not copy
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++; // loop until null to concat
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]; // cat src[j] starts from null
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_strcat(argv[1], argv[2]);
		printf("%s\n", argv[1]);
	}
	return (0);
}
