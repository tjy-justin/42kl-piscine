#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 		printf("%s\n", argv[1]);
// 		printf("%s\n", argv[2]);
// 		ft_strncpy(argv[1], argv[2], 20);
// 		printf("%s\n", argv[1]);
// 	}
// 	return (0);
// }
