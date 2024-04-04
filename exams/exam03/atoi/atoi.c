// Skipping Leading White Spaces
// whitespaces is 9 to 13
// handle space itself, 32

// Handling Optional Sign
// convert string - to int -

// Parsing Numerical Digits
// convert by - '0'
// * 10 as we move from one digit to another

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13 && str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	int num1 = ft_atoi(argv[1]);

	printf("%d\n", num1);
	return (0);
}