/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:43:27 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:40:23 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compares two strings up to n length and returns the difference */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		else if (*s1 > *s2 || *s2 > *s1)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[] = "hello";

	if (argc != 2 && argc != 3)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%i", ft_strncmp(a, argv[1], 3));
}
