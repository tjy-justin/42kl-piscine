/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:53:26 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:46:15 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*use a needle (to_find) to check first occurrence of needle in haystack (str)
 & point it towards the first character*/
/* if needle is empty, return haystack */
/* if haystack doesn't contain needle, return null */
char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		j;

	j = 0;
	ptr = str;
	if (to_find[0] == '\0')
		return (ptr);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && str[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (ptr + j);
		j++;
		str++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[] = "hello, this is 42 KL";

	if (argc != 2)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%s", ft_strstr(a, argv[1]));
}
