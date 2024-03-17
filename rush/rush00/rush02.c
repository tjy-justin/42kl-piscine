/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_testing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamzah <mhamzah@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:18:10 by mhamzah           #+#    #+#             */
/*   Updated: 2024/03/17 13:28:31 by mhamzah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	topline(int x)
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
			ft_putchar('A');
		ft_putchar('\n');
	}
}

void	midline(int x)
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

void	bottomline(int x)
{
	int	a;

	if (x > 0)
	{
		ft_putchar('C');
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
					topline(x);
				else if (d == y - 1)
					bottomline(x);
				else
					midline(x);
				d++;
			}
		}
		else
			printf("Wrong input for your row, bruh\n");
	}
	else
		printf("Wrong input for your column, bruh\n");
}
