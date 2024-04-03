/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echua <echua@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:20:50 by echua             #+#    #+#             */
/*   Updated: 2024/04/02 12:21:33 by echua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_alpha_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(){
	char	str1[] = "asjtgiow";
	char	str2[] = "A s 1";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	return (0);
}
*/
