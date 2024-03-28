#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j]; // cannot be src=dest as we store to dest
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_strncat(argv[1], argv[2], 20);
		printf("%s\n", argv[1]);
	}
	return (0);
}