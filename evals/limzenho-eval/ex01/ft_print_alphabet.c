/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limzenho <limzenho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:24:30 by limzenho          #+#    #+#             */
/*   Updated: 2024/03/14 18:41:29 by limzenho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		b;

	b = 'a';
	while (b <= 'z')
	{
		write(1, &b, 1);
		b++;
	}
}