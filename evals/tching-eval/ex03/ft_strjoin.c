/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:44:44 by tching            #+#    #+#             */
/*   Updated: 2024/04/01 18:06:13 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that will concatenate all the strings pointed by strs
 * separated by sep.
 * size is the number of strings in strs
 * if size is 0, you must return an empty string that you can free().
 * Here’s how it should be prototyped :
 * char *ft_strjoin(int size, char **strs, char *sep);*/

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		x;
	int		y;
	int		z;

	s = malloc(sizeof(strs));
	x = 0;
	z = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			s[z++] = strs[x][y++];
		}
		y = 0;
		while (sep[y] && x != size - 1)
		{
			s[z++] = sep[y++];
		}
		x++;
	}
	s[z] = '\0';
	return (s);
}

int	main(void)
{
	char	*tab[3];

	tab[0] = "A ";
	tab[1] = "The ";
	tab[2] = " ";
	printf("%s", ft_strjoin(3, tab, "Yellowstone"));
	return (0);
}
