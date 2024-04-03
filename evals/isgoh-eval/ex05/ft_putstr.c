/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:00:26 by isgoh             #+#    #+#             */
/*   Updated: 2024/04/03 13:52:05 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = -1;
	while (str[++count] != '\0')
		write(1, &str[count], 1);
}

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*message;

	message = "c92349r2#&$$*(#";
	ft_putstr(message);
	return (0);
}
