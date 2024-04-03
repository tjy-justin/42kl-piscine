#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// strlen, strcpy, strdup

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(i * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(dest, src));
}

// int	main(void)
// {
// 	char	*s;
// 	char	*d;

// 	s = "Hello, world!";
// 	d = ft_strdup(s);
// 	if (d)
// 	{
// 		printf("Orig: %s\nDup: %s\n", s, d);
// 		free(d);
// 	}
// 	else
// 		printf("Malloc failed!\n");
// 	return (0);
// }
