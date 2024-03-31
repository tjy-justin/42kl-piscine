/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:48:34 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:43:19 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*combines string src to the end of string dest and null terminates it */
char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[100] = "hello";

	if (argc != 2)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%s", ft_strcat(a, argv[1]));
}
