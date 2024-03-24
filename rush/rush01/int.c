#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define SIZE 4

void inArray(char *edgeStr, int *arr) // convert to integer array
{
    int i = 0;
    while (*edgeStr != '\0')
    {
        if (*edgeStr >= '1' && *edgeStr <= '4')
        {
            *arr++ = *edgeStr - '0';

            i++;
        }
        edgeStr++;
    }

    // DEBUG ONLY
    write(1, "Parsed 1D array: ", 17);
    for (int j = 0; j < i; j++)
    {
        char c = *(arr - i + j) + '0';
        write(1, &c, 1);
        if (j < i - 1)
        {
            write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}

int **outArray(void)
{
    int **outarr = (int **)malloc(SIZE * sizeof(int *)); // malloc for rows
    if (outarr == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < SIZE; i++)
    {
        outarr[i] = (int *)malloc(SIZE * sizeof(int)); // malloc for columns
        if (outarr[i] == NULL)
        {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
    }
    return outarr;
}

void fill_random_numbers(int **outarr)
{
    srand(time(NULL)); // Seed the random number generator with current time
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            outarr[i][j] = rand() % 4 + 1; // Generate random number from 1 to 4
        }
    }
}

void print_2d_array(int **outarr)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", outarr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(2, "Usage: ./main \"1 2 3 4\"\n", 32);
        return (1);
    }

    int *input_arr = malloc(SIZE * SIZE * sizeof(int));
    inArray(argv[1], input_arr);

	int i;

    i = 0;
	while (i < SIZE * SIZE)
    {
        if (input_arr[i] < 1 || input_arr[i] > 4)
        {
            write(1, "nixda\n", 6);
            free(input_arr);
            return 1;
        }
        i++;
    }

    int **outarr = outArray();

    // TEST ZONE
    fill_random_numbers(outarr);
    printf("Randomly generated array:\n");
    print_2d_array(outarr);

    free(input_arr);
    if (outarr != NULL)
    {
        for (int i = 0; i < SIZE; i++)
        {
            free(outarr[i]);
        }
        free(outarr); // Free the array of pointers
    }

    return 0;
}

