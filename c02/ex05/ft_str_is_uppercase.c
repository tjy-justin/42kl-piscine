#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 		int upcase = ft_str_is_uppercase(argv[1]);
// 		printf("%d\n", upcase);
// 	}
// 	return (0);
// }