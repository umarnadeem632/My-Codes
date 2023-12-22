#include<stdio.h>

int main() {
    // Declare a 3x3 matrix
    int i, j, a[3][3];

    // Input elements into the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Display the entered matrix
    printf("Entered matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Find the largest element in the matrix and its position
    int largest = a[0][0];
    int row_m = 0;
    int column_m = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // Compare each element with the current largest element
            if (largest < a[i][j]) {
                largest = a[i][j];
                row_m = i;
                column_m = j;
            }
        }
    }

    // Display the largest element and its position
    printf("%d is the largest element\nPosition: row = %d and column = %d\n", largest, row_m + 1, column_m + 1);

    return 0;
}

