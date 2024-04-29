// 4 functions: ft_putchar, border_line, mid_line, rush
// rush for pattern logic
// line for print chars

#include <unistd.h>

void	ft_putchar(char c);

void	border_line(int x)
{
	int	k;

	k = 1;
	if (x > 0)
	{
		ft_putchar('A');
		while (k < (x - 1))
		{
			ft_putchar('B');
			k++;
		}
		if (x != 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	mid_line(int x)
{
	int	j;

	j = 1;
	if (x > 0)
	{
		ft_putchar('B');
		while (j < (x - 1))
		{
			ft_putchar(' ');
			j++;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i = 0;

	if (x > 0 && y > 0)
	{
		while (i < y)
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