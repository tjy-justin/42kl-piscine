/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:02:33 by jin-tan           #+#    #+#             */
/*   Updated: 2024/03/15 04:02:33 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0') // loop until end of str
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
    char *c = "Hello World!\n";
    
    ft_putstr(c);
    
    return 0;
}