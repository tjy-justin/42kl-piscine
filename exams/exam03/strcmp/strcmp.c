int	fstrcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	s1 = "hello";
	s2 = "hbllo";

	int out = fstrcmp(s1, s2);
	printf("%d\n", out);
}