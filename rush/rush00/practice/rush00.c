#include <unistd.h>

void	ft_putchar(char c);

void	border_line(int x)
{
	int	k;

	k = 0;
	if (x > 0)
	{
		ft_putchar('o');
		while (k < x - 1)
		{
			ft_putchar('-');
			k++;
		}
		if (x != 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	mid_line(int x)
{
	int	j;

	j = 0;
	if (x > 0)
	{
		ft_putchar('|');
		while (j < x - 1)
		{
			ft_putchar(' ');
			j++;
		}
		if (x != 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y) // prevents mid_line triggers more than needed
		{
			if (i == 0 || i == y - 1)
			{
				border_line(x);
			}
			else
			{
				mid_line(x);
			}
			i++;
		}
	}
	else
	{
		write(1, "ERROR. Please enter a proper input > 0.\n", 41);
	}
}