// printable is >= 32 <= 126
// use echo -e to print unprintable
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int illegal = ft_str_is_printable(argv[1]);
		printf("%d\n", illegal);
	}
}