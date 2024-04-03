/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echua <echua@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:21:58 by echua             #+#    #+#             */
/*   Updated: 2024/04/02 12:22:14 by echua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_alpha_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(){
	char	str1[] = "HIGUYSHOWAREYOUDOING";
	char	str2[] = "h1 gu3ss wh0 it is";
	char	str3[] = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));

	return (0);
}
*/
