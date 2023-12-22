#include<stdio.h>

int main() {
    // Declare an array to store 10 integers
    int a[10];
    int i, j, temp = 0;

    // Input elements into the array
    for (i = 0; i < 10; i++) {
        printf("Enter element of array at index %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Ascending Order Sort using Bubble Sort
    printf("Ascending\n");
    for (i = 0; i < 10; i++) {
        // Iterate through the array
        for (j = 0; j < 9; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (a[j] > a[j + 1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        // Print the current state of the array after each pass
        printf("%d ", a[i]);
    }

    // Print a newline to separate the ascending and descending outputs
    printf("\n");

    // Descending Order Sort using Bubble Sort
    printf("Descending\n");
    for (i = 0; i < 10; i++) {
        // Iterate through the array
        for (j = 0; j < 9; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (a[j] < a[j + 1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array in descending order
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

