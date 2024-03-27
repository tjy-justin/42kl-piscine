#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{ // compare from 0 to n-1
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
		int comp = ft_strncmp(argv[1], argv[2], 20);
		printf("%d\n", comp);
	}
	return (0);
}