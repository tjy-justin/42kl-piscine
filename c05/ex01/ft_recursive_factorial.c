int	ft_recursive_factorial(int nb)
{
	if (nb < 0) // no neg factorial
		return (0);
	else if (nb == 0)
	{
		return (1);
	}
	else // n! = n*(n-1)!
		return (nb * ft_recursive_factorial(--nb));
}

#include <stdio.h>

int	main(void)
{
	int factorial = ft_recursive_factorial(5);

	printf("%d\n", factorial);
	return (0);
}