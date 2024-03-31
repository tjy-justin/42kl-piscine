#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int lowcase = ft_str_is_lowercase(argv[1]);
// 		printf("%d\n", lowcase);
// 	}
// 	return (0);
// }