/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:37:27 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:35:10 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*compares s1 and s2 & returns the difference) */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s2 > *s1)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[] = "hello";

	if (argc != 2)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%i", ft_strcmp(a, argv[1]));
}
