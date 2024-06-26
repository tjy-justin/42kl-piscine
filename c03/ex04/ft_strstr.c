/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:06:14 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/01 14:56:35 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0') // return str if to_find empty
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j]) // if str[i] loop exits  w/o match
		{
			if (to_find[j + 1] == '\0') // reaches end of j
			{
				return (str + i); // returns rest of str
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*instr;

	(void)argc;
	instr = ft_strstr(argv[1], argv[2]);
	printf("%s\n", instr);
}
