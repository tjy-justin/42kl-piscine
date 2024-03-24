#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// Function to parse input clues into a 2D array
void parse_clues(char *str, int clues[SIZE * 4]) {
    int i = 0;
    while (*str != '\0') {
        if (*str >= '1' && *str <= '4') {
            clues[i++] = *str - '0'; // Convert character to integer and store in array
        }
        str++;
    }
}

// Function to check visibility rules for a given direction
int check_visibility(int row_or_col[SIZE], int clue) {
    int visible = 1;
    int tallest = 0;
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (row_or_col[i] > tallest) {
            tallest = row_or_col[i];
            count++;
        }
    }
    if (count != clue) {
        visible = 0;
    }
    return visible;
}

// Function to verify if the solution satisfies the visibility rules
int verify_solution(int solution[SIZE][SIZE], int clues[SIZE * 4]) {
    // Check visibility rules for each row based on the input clues
    for (int i = 0; i < SIZE; i++) {
        int row_visibility = check_visibility(solution[i], clues[i]);
        if (!row_visibility) {
            return 0; // Solution does not satisfy visibility rules for this row
        }
    }
    // Check visibility rules for each column based on the input clues
    for (int j = 0; j < SIZE; j++) {
        int col_visibility[SIZE];
        for (int i = 0; i < SIZE; i++) {
            col_visibility[i] = solution[i][j];
        }
        int col_index = SIZE + j;
        int col_visibility_rule = check_visibility(col_visibility, clues[col_index]);
        if (!col_visibility_rule) {
            return 0; // Solution does not satisfy visibility rules for this column
        }
    }
    // Solution satisfies all visibility rules
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s \"input_clues\"\n", argv[0]);
        return 1;
    }

    // Parse input clues
    int clues[SIZE * 4];
    parse_clues(argv[1], clues);

    // Example: Creating a solution (replace this with your actual solution)
    int solution[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {3, 4, 1, 2},
        {4, 1, 2, 3}
    };

    // Verify solution
    if (verify_solution(solution, clues)) {
        printf("Valid solution!\n");
    } else {
        printf("Invalid solution!\n");
    }

    return 0;
}
