/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:45:36 by etien             #+#    #+#             */
/*   Updated: 2024/03/28 17:49:15 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*length_malloc(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*concat_str;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += (ft_strlen(sep) * (size - 1));
	length++;
	if (size <= 0)
		length = 1;
	concat_str = (char *)malloc(length * sizeof(char));
	if (!concat_str)
		return (NULL);
	return (concat_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat_str;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	concat_str = length_malloc(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			concat_str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			concat_str[k++] = sep[j++];
		}
	}
	concat_str[k] = '\0';
	return (concat_str);
}

#include <stdio.h>
#include <stdlib.h>

// Prototype of your function
char *ft_strjoin(int size, char **strs, char *sep);

int main() {
    char *strs[] = {"abc", "def", "Gamma", "Theta", NULL};
    char *sep = "/ ";
    char *result = ft_strjoin(4, strs, sep);

    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Error: Failed to concatenate strings.\n");
    }

    return 0;
}

