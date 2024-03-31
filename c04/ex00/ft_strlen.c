#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_strlen(argv[1]);
		printf("%s\n", argv[1]);
	}
	return (0);
}