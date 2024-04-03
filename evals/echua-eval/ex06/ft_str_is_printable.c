/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echua <echua@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:22:43 by echua             #+#    #+#             */
/*   Updated: 2024/04/02 12:23:11 by echua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(){
	char	str1[] = " ~123456789-0=+_h ouidfhs";
	char	str2[] = "";
	char	str3[] = "OC";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));

	return (0);
}
*/
