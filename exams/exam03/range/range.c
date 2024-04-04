#include <stdlib.h>
#include <unistd.h>

int	*range(int min, int max)
{
	int	range;
	int	i;
	int	*s;

	i = 0;
	s = malloc(range * sizeof(int));
	if (max >= min)
		range = max - min + 1;
	if (max < min)
		range = min - max + 1;
	if (max >= min)
	{
		while (max <= min)
		{
			s[i++] = min++;
			i++;
		}
	}
	else
	{
		while (max >= min)
		{
			s[i] = min--;
			i++;
		}
	}
	s[i] = min;
	return (s);
}

int	main(void)
{
	int *result = range(1, 3);
	int i = 0;
	while (result[i])
	{
		write(1, &result[i], sizeof(int));
		i++;
	}
	return (0);
}