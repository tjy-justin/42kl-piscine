/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03_testing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamzah <mhamzah@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:35:17 by mhamzah           #+#    #+#             */
/*   Updated: 2024/03/17 13:12:34 by mhamzah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	top_bottom_line(int x)
{
	int	a;

	if (x > 0)
	{
		ft_putchar('A');
		a = 1;
		while (a < x - 1)
		{
			ft_putchar('B');
			a++;
		}
		if (x != 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	mid_line(int x)
{
	int	b;

	if (x > 0)
	{
		ft_putchar('B');
		b = 1;
		while (b < x - 1)
		{
			ft_putchar(' ');
			b++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	d;

	d = 0;
	if (x > 0)
	{
		if (y > 0)
		{
			while (d < y)
			{
				if (d == 0)
					top_bottom_line(x);
				else if (d == y - 1)
					top_bottom_line(x);
				else
					mid_line(x);
				d++;
			}
		}
		else
			printf("Wrong input for your row, bruh\n");
	}
	else
		printf("Wrong input for your column, bruh\n");
}
