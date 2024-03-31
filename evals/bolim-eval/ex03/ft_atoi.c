/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:38:07 by bolim             #+#    #+#             */
/*   Updated: 2024/03/30 17:27:06 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 • Write a function that converts the initial portion of the string pointed by
 str to its int representation. The string can start with an arbitary amount
 of white space (as determined by isspace(3)) .The string can be followed by an
 arbitrary amount of + and- signs,- sign will change the sign of the int
 returned based on the number of- is odd or even.
 • Finally the string can be followed by any numbers of the base 10.
 • Your function should read the string until the string stop following the
 rules and return the number found until now.
 • You should not take care of overflow or underflow. result can be undefined
 in that case. Here’s an example of a program that prints the atoi return value:
 $>./a.out "---+--+1234ab567"-1234
 • Here’s how it should be prototyped :
 int
 ft_atoi(char *str);
 */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg_sign;
	int	result;

	i = 0;
	neg_sign = 1;
	result = 0;
	while (*str && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
			|| str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			neg_sign = neg_sign * (-1);
		}
		i++;
	}
	while (*str && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg_sign);
}

int	main(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (argc != 2)
	{
		return (1);
	}
	result = ft_atoi(argv[1]);
	if (result != 0)
		printf("Converted result: %d\n", result);
	else
		printf("Failed to convert\n");
	return (0);
}
