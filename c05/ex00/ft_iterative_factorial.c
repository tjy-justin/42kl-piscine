int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0) // no neg factorial as n! = n*(n-1)!
		return (0);
	else if (nb == 0)
	{
		return (num);
	}
	while (nb > 0)
	{
		num *= nb--; // this is *= nb && nb--
	}
	return (num);
}

#include <stdio.h>

int	main(void)
{
	int factorial = ft_iterative_factorial(5);

	printf("%d\n", factorial);
	return (0);
}