/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:03:30 by tching            #+#    #+#             */
/*   Updated: 2024/04/01 17:55:45 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strdup (man strdup).
 * Here’s how it should be prototyped :
 * char *ft_strdup(char *src);
 */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*str;
	char	*new_str;

	str = "when yellow stonee??";
	new_str = ft_strdup(str);
	printf("%s\n", new_str);
}
