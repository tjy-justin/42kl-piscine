/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   REALrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:50:48 by bachai            #+#    #+#             */
/*   Updated: 2024/03/24 18:51:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SIZE 4

void	inarray(char *edgestr, int *arr)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (*edgestr != '\0')
	{
		if (*edgestr >= '1' && *edgestr <= '4')
		{
			*arr++ = *edgestr - '0';
			i++;
		}
		edgeStr++;
	}
	write(1, "Parsed 1D array: ", 17);
	while (j < i)
	{
		char	c;
		c = *(arr - i + j) + '0';
		write(1, &c, 1);
		if (j < i - 1)
		{
			write(1, " ", 1);
		}
		j++;
	}
	write(1, "\n", 1);
}

int	**outarray(void)
{
	int	i;
	int	**outarr;

	**outarr = (int **)malloc(SIZE * sizeof(int *));
	if (outarr == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(1);
	}
	i = 0;
	while (i < SIZE)
	{
		outarr[i] = (int *)malloc(SIZE * sizeof(int));
		if (outarr[i] == NULL)
		{
			fprintf(stderr, "Memory allocation failed.\n");
			exit(1);
		}
		i++;
	}
	return (outarr);
}

void	fill_random_numbers(int **outarr)
{
	int	i;
	int	j;

	srand(time(NULL));
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			outarr[i][j] = rand() % 4 + 1;
			j++;
		}
		i++;
	}
}

void	print_2d_array(int **outarr)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			printf("%d ", outarr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
    int	*input_arr;
    int	i;
    int	**outarr;
	int	something(int argc, char **argv);

	input_arr = malloc(SIZE * SIZE * sizeof(int));
    inArray(argv[1], input_arr);
    outarr = outArray();
    fill_random_numbers(outarr);
    printf("Randomly generated array:\n");
    print_2d_array(outarr);
    free(input_arr);
	if (outarr != NULL)
    {
        i = 0;
        while (i < SIZE)
        {
            free(outarr[i]);
            i++;
        }
        free(outarr);
    }
    return (0);
}

int something(int argc, char **argv)
{
    int i;
	char *arg = argv[1];

    i = 0;
    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return 1;
    }

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == 32)
        {
        }
        else if (arg[i] < '1' || arg[i] > '4') 
		{
            write(1, "Error\n", 6);
            return 1;
        }
        i++;
    }
    while (i != 31) //if
    {
        write(1, "Error\n", 13);
        return 1;
    }
	return (0);
}
