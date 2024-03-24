#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

// Function to parse the input string and store the numbers in the array
void parse_input(char *str, int *arr) {
    int i = 0;
    while (*str != '\0') {
        if (*str >= '1' && *str <= '4') {
            *arr++ = *str - '0'; // Convert character to integer and store in array
            i++;
        }
        str++;
    }
}

// Function to allocate memory for the 2D array
int **create_2d_array() {
    int **arr = (int **)malloc(SIZE * sizeof(int *));
    if (arr == NULL) {
        write(2, "Memory allocation failed.\n", 26); // Error message to stderr
        exit(1);
    }
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (int *)malloc(SIZE * sizeof(int));
        if (arr[i] == NULL) {
            write(2, "Memory allocation failed.\n", 26); // Error message to stderr
            exit(1);
        }
    }
    return arr;
}

// Function to free memory allocated for the 2D array
void free_2d_array(int **arr) {
    for (int i = 0; i < SIZE; i++) {
        free(arr[i]);
    }
    free(arr);
}

// Function to print the 2D array
void print_array(int **arr) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            char c = arr[i][j] + '0'; // Convert integer to character
            write(1, &c, 1); // Write character to stdout
            if (j < SIZE - 1) {
                write(1, " ", 1); // Write space between numbers
            }
        }
        write(1, "\n", 1); // Write newline after each row
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(2, "Usage: ./program_name \"input_string\"\n", 39); // Error message to stderr
        return 1;
    }

    int *input_arr = malloc(SIZE * SIZE * sizeof(int)); // Allocate memory for input array
    if (input_arr == NULL) {
        write(2, "Memory allocation failed.\n", 26); // Error message to stderr
        return 1;
    }
    
    parse_input(argv[1], input_arr); // Parse input string and store numbers in input array
    
    int **skyscraper_grid = create_2d_array(); // Create 2D array for skyscraper puzzle grid

    // Populate skyscraper puzzle grid with numbers from input array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            skyscraper_grid[i][j] = input_arr[i * SIZE + j];
        }
    }

    print_array(skyscraper_grid); // Print the skyscraper puzzle grid

    // Free memory allocated for arrays
    free(input_arr);
    free_2d_array(skyscraper_grid);

    return 0;
}
