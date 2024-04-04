#include <unistd.h>

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}

// To implement ulstr in main, use argv[1][i]

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
	}
	else
		ulstr(av[1]);
}