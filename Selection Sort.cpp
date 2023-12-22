#include <stdio.h>

int main() {
    // Declare an array to store 10 integers
    int a[10];
    int i, j, temp;

    // Input elements into the array
    printf("Enter an array of 10 elements: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Ascending Order Sort using Selection Sort
    printf("Ascending order\n");

    for (i = 0; i < 10; i++) {
        // Find the index of the smallest element in the unsorted part
        int smallest = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[smallest]) {
                smallest = j;
            }
        }

        // Swap the smallest element with the current element
        temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;

        // Print the current state of the array after each pass
        printf("%d ", a[i]);
    }

    // Print a newline to separate the ascending and descending outputs
    printf("\n");

    // Descending Order Sort using Selection Sort
    printf("Descending order\n");

    for (i = 0; i < 10; i++) {
        // Find the index of the largest element in the unsorted part
        int largest = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] > a[largest]) {
                largest = j;
            }
        }

        // Swap the largest element with the current element
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
    }

    // Print the sorted array in descending order
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

