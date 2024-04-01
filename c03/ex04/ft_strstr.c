/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:06:14 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/01 11:37:06 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char	*instr;

// 	if (argc == 3)
// 	{
// 		instr = ft_strstr(argv[1], argv[2]);
// 		if (instr != NULL)
// 		{
// 			printf("%s\n", instr);
// 		}
// 		return (0);
// 	}
// }
