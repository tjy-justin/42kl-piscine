int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;

	min = 5;
	max = 10;
	arr = ft_range(min, max);
	if (arr != NULL)
	{
		for (int i = 0; i < max - min; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		free(arr);
	}
	else
	{
		printf("Error: Invalid range\n");
	}
	return (0);
}
