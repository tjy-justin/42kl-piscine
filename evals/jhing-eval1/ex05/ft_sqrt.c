/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhing <jhing@student.42kl.edu.my>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-02 14:08:02 by jhing             #+#    #+#             */
/*   Updated: 2024-04-02 14:08:02 by jhing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	int negative = ft_sqrt(-1);
	int positive = ft_sqrt(1);
	int rational_num = ft_sqrt(4);
	int irrational_num = ft_sqrt(2);
	int max_num = ft_sqrt(46340);
	printf("negative num: %d\n", negative);
	printf("positive num: %d\n", positive);
	printf("rational num: %d\n", rational_num);
	printf("irrational num: %d\n", irrational_num);
	printf("Maximum num: %d\n", max_num);
	return (0);
} */