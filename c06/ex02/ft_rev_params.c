#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int i;
	int j;

	i = ac - 1;

	while (i > 0)
	{
		j = 0;
		while (av[i][j]) // iterates from av[] 2, 1, ...
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}