int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		num *= nb; // multiplies itself until > 1
		power--;
	}
	return (num);
}

#include <stdio.h>

int	main(void)
{
	int power = ft_iterative_power(2, 8);

	printf("%d\n", power);
}