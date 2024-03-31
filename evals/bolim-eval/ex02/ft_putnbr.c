/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: bolim <bolim@student.42kl.edu.my>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/03/25 22:19:52 by bolim             #+#    #+#             */
/*   Updated: 2024/03/25 22:19:52 by bolim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 • Create a function that displays the number entered as a parameter. The
 function has to be able to display all possible values within an int type
 variable. Here’s how it should be prototyped :
 void ft_putnbr(int nb);
 • For example:
 ◦ ft_putnbr(42) displays "42".
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	int value;

	value = -2147483647;
	ft_putnbr(value);
	printf("displays %d\n", value);
	value = 2147483647;
	ft_putnbr(value);
	printf("displays %d\n", value);
	value = 42;
	ft_putnbr(value);
	printf("displays %d\n", value);
	value = -42;
	ft_putnbr(value);
	printf("displays %d\n", value);
}
