// strcpy src to dest

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("Copy: %s\n", dest);
	return (0);
}
