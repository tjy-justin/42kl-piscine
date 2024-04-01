// atoi but
// all possivble int chars

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int num = atoi(argv[1]);
// 		ft_putnbr(num);
// 		printf("%d\n", num);
// 	}
// 	return (0);
// }