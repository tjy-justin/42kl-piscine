/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:14:58 by bolim             #+#    #+#             */
/*   Updated: 2024/03/30 17:21:37 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	s1[50] = "there are 33 number of characters";
	int		length;

	printf("show string: %s\n", s1);
	length = strlen(s1);
	printf("correct value is: %d\n", length);
	length = ft_strlen(s1);
	printf("this function outputs: %d\n", length);
}
