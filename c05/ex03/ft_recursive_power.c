int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, --power));
}

#include <stdio.h>

int	main(void)
{
	int	power;

	power = ft_recursive_power(2, 5);
	printf("%d\n", power);
}

// why seg fault when power-- but not --power