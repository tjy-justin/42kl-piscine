// n = n−1 + n−2
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377

int	ft_fibonacci(int index)
{
	int	num;

	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (num);
	}
}

#include <stdio.h>

int	main(void)
{
	int fibo = ft_fibonacci(8);

	printf("%d\n", fibo);
	return (0);
}