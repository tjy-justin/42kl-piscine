/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echua <echua@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:18:24 by echua             #+#    #+#             */
/*   Updated: 2024/04/02 12:20:27 by echua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	check_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(){
	char	str1[] = "1294821";
	char	str2[] = "2 2 1";

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	return (0);
}
*/
