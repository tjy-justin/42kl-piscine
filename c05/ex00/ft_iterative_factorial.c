int	ft_iterative_factorial(int nb)
{
	while (nb != '\0')
	{
		/* code */
	}
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	int factorial = ft_iterative_factorial(argv[1]);

	printf("%d\n", factorial);
	return (0);
}