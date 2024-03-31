/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:51:48 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:45:24 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* append string src to end of string destination limited to a certain length
 nb &  null terminate it */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (*src && j < nb)
	{
		dest[i] = *src;
		i++;
		src++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[] = "";

	if (argc != 2)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%s", ft_strncat(a, argv[1], 10));
}
