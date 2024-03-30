#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i)
	{
		write(1, &str[--i], 1);
	}
	return (0);
}

int	main(void)
{
	char str[] = "abcdefg";
	ft_rev_print(str);
}