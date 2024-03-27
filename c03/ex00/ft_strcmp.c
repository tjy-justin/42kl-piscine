#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int comp = ft_strcmp(argv[1], argv[2]);
		printf("%d\n", comp);
	}
	return (0);
}