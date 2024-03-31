/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:58 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/31 14:30:50 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == 1)
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && flag == 0)
			str[i] += 32;
		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A'
				&& str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9'))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*strcase;

	if (argc == 2)
	{
		*strcase = ft_strcapitalize(argv[1]);
		printf("%s\n", strcase);
	}
}
