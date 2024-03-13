/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:53:18 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/14 03:53:18 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	i;

	for (i = '0'; i <= '9'; i++)
	{
		write(1, &i, 1);
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
