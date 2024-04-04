/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:05:51 by jin-tan           #+#    #+#             */
/*   Updated: 2024/04/04 17:42:03 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// atoi but in string and all possible int chars
// can convert int to long to take care of largest int

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
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		// recursive, so 123 will call ft_putnbr until all are separated
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	ft_putnbr(123);
	ft_putchar('\n');
	ft_putnbr(-456);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}
