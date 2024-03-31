char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t')))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		char *strcase = ft_strcapitalize(argv[1]);
// 		printf("%s\n", strcase);
// 	}
// }