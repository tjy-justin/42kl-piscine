#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i]) // loops through s2 chars
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	ft_strcpy(argv[1], argv[2]);
	printf("%s\n", argv[2]);
	return (0);
}
