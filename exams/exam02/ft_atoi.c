#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int conv = ft_atoi(argv[1]);

		printf("%d\n", conv);
		return (0);
	}
}