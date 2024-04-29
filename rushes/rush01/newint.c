
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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
    int j = 0;
    while (j < i)
    {
        char c = *(arr - i + j) + '0';
        write(1, &c, 1);
        if (j < i - 1)
        {
            write(1, " ", 1);
        }
        j++;
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
    int i = 0;
    while (i < SIZE)
    {
        outarr[i] = (int *)malloc(SIZE * sizeof(int)); // malloc for columns
        if (outarr[i] == NULL)
        {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
        i++;
    }
    return (outarr);
}

void fill_random_numbers(int **outarr)
{
    srand(time(NULL)); // Seed the random number generator with current time
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            outarr[i][j] = rand() % 4 + 1; // Generate random number from 1 to 4
            j++;
        }
        i++;
    }
}

void print_2d_array(int **outarr)
{
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            printf("%d ", outarr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(int argc, char **argv)
{
    int *input_arr;
    int i;
    int **outarr;

    if (argc != 2)
    {
        write(2, "Usage: ./main \"1 2 3 4\"\n", 32);
        return (1);
    }
    input_arr = malloc(SIZE * SIZE * sizeof(int));
    inArray(argv[1], input_arr);
    i = 0;
    while (i < SIZE * SIZE)
    {
        if (input_arr[i] < 1 || input_arr[i] > 4)
        {
            write(1, "nixda\n", 6);
            free(input_arr);
            return (1);
        }
        i++;
    }
    outarr = outArray();
    // TEST ZONE
    fill_random_numbers(outarr);
    printf("Randomly generated array:\n");
    print_2d_array(outarr);
    free(input_arr);
    if (outarr != NULL)
    {
        int i = 0;
        while (i < SIZE)
        {
            free(outarr[i]);
            i++;
        }
        free(outarr); // Free the array of pointers
    }
    return (0);
}
