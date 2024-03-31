/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:55:50 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/30 15:50:03 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*string length count */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/* append string source to dest. Up to (size - length of dest - 1) & nul term.*/
void	append_s2_s1_size(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	int				des_len;

	des_len = ft_strlen(dest);
	i = des_len;
	j = 0;
	while (*src && j < size - des_len - 1)
	{
		dest[i] = *src;
		src++;
		i++;
		j++;
	}
	dest[i] = '\0';
}

/*Append &	Return total length of string they tried to create (initial length
 dest plus length of src) */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	total_len;
	int				des_len;
	int				src_len;

	des_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = src_len + des_len;
	if (total_len >= size)
		return (size + src_len);
	append_s2_s1_size(dest, src, size);
	return (total_len);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	a[] = "hello";

	if (argc != 2)
	{
		printf("Usage: ./a.out \"string\"\n");
		return (1);
	}
	printf("%i\n", ft_strlcat(a, argv[1], 10));
	printf("%s\n", a);
}
