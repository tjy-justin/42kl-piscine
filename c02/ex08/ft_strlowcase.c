char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *lowcase = ft_strlowcase(argv[1]);
		printf("%s\n", lowcase);
	}
}