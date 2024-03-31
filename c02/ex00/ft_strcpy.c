#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
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
// 		ft_strcpy(argv[1], argv[2]);
// 		printf("%s\n", argv[1]);
// 	}
// 	return (0);
// }
