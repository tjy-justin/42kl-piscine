#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar(nb);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		ft_putnbr(num);
	}
	return (0);
}