/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:17:48 by etien             #+#    #+#             */
/*   Updated: 2024/03/28 17:40:06 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;
	int		i;

	src_length = 0;
	i = 0;
	while (src[src_length])
		src_length++;
	dest = (char *)malloc((src_length + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Prototype of your ft_strdup function
char *ft_strdup(char *src);

int main(void) {
    char *source = "Hello, world!";
    char *duplicate;

    // Test ft_strdup function
    duplicate = ft_strdup(source);

    if (duplicate == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original string: %s\n", source);
    printf("Duplicate string: %s\n", duplicate);

    // Free memory allocated by ft_strdup
    free(duplicate);

    return 0;
}
*/
