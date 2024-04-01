/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-28 06:30:22 by jhing             #+#    #+#             */
/*   Updated: 2024-03-28 06:30:22 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/* int	main(void)
{
	char lowcase[] = "abcdefghijklmnopqrstuvwxyz";
	char *plowcase = lowcase;

	ft_strupcase(plowcase);
	printf("String to uppercase: %s\n", plowcase);
} */