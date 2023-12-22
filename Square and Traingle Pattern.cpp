#include <stdio.h>

// Function to print a square of '*' characters
void printSquare(int sideLength) {
    // Outer loop for rows
    for (int i = 0; i < sideLength; i++) {
        // Inner loop for columns
        for (int j = 0; j < sideLength; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print a right-angled triangle of '*' characters
void printTriangle(int numRows) {
    // Outer loop for rows
    for (int i = 0; i <= numRows; i++) {
        // Inner loop for columns
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int sideLength, numRows;

    // Input side length for the square
    printf("Enter side length for the square: ");
    scanf("%d", &sideLength);

    // Input number of rows for the triangle
    printf("Enter number of rows for the triangle: ");
    scanf("%d", &numRows);

    // Print square pattern
    printf("Square Pattern:\n");
    printSquare(sideLength);

    // Print triangle pattern
    printf("\nTriangle Pattern:\n");
    printTriangle(numRows);

    return 0;
}

