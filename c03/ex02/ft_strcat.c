#include <stdio.h>

char	*ft_strcat(char *dest, char *src) // concatenate not copy
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++; // loop until null to concat
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]; // cat src[j] starts from null
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
		ft_strcat(argv[1], argv[2]);
		printf("%s\n", argv[1]);
	}
	return (0);
}