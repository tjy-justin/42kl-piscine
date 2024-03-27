/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 04:09:46 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/27 22:37:46 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
	}
	else if (n >= 0)
	{
		sign = 'P';
	}
	write(1, &sign, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		ft_is_negative(num);
	}
	return (0);
}