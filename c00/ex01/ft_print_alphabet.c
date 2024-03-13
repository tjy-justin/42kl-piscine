/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:24:43 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/14 03:24:43 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	i;

	for (i = 'a'; i <= 'z'; i++)
	{
		write(1, &i, 1);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
