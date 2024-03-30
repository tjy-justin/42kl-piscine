char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *strcase = ft_strcapitalize(argv[1]);
		printf("%s\n", strcase);
	}
}