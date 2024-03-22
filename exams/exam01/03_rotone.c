#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Y') || (*str >= 'a' && *str <= 'y'))
		{
			ft_putchar(*str + 1);
		}
		else if ((*str == 'Z' || *str == 'z'))
		{
			ft_putchar(*str - 25);
		}
		else
		{
			ft_putchar(*str);
		}
		*str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}