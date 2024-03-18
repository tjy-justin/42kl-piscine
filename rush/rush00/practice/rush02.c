#include <unistd.h>

void	ft_putchar(char c);

void	top_line(int x)
{
	int	k;

	k = 0;
	if (x > 0)
	{
		ft_putchar('A');
		while (k < x - 1)
		{
			ft_putchar('B');
			k++; // inc should be inside while loop
		}
		if (x != 1)
		{
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

void	bottom_line(int x)
{
	int	k;

	k = 0;
	if (x > 0)
	{
		ft_putchar('C');
		while (k < x - 1)
		{
			ft_putchar('B');
			k++; // inc should be inside while loop
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

	j = 0;
	if (x > 0)
	{
		ft_putchar('B');
		while (j < x - 1)
		{
			ft_putchar(' ');
			j++; // inc should be inside while loop
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
		while (i < y) // prevents mid_line overflow
		{
			if (i == 0) // until latest line
			{
				top_line(x);
			}
			else if (i == y - 1)
			{
				bottom_line(x);
			}

			else
			{
				mid_line(x);
			}
			i++; // inc should be inside while loop
		}
	}
	else
	{
		write(1, "ERROR. Please enter a proper input > 0.\n", 41);
	}
}