// tab = array of int
// len = # of elements

#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[len--];
	while (len--)
	{
		if (tab[len] > max)
		{
			max = tab[len];
		}
	}
	return (max);
}

int	main(void)
{
	int *tab;

	if (!(tab = (int *)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", max(tab, 3));
	free(tab);
	return (0);
}