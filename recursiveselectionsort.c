#include<stdio.h>

void Ascending(int i, int a[]);
void descending(int i, int a[]);
void large(int i, int a[]);

int main() {
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &i);
    int a[i];

    printf("Enter the elements: ");
    for(int j = 0; j < i; j++) {
        scanf("%d", &a[j]);
    }

    large(i, a);

    printf("\nAscending Order\n");
    Ascending(i, a);

    printf("\nDescending Order\n");
    descending(i, a);

    return 0;
}

void Ascending(int i, int a[]) {
    for(int j = 0; j <= i - 1; j++) {
        for(int k = 0; k < i - j - 1; k++) {
            if(a[k] > a[k + 1]) {
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    for(int j = 0; j < i; j++) {
        printf("%d ", a[j]);
    }
}

void descending(int i, int a[]) {
    for(int j = 0; j <= i - 1; j++) {
        for(int k = 0; k < i - j - 1; k++) {
            if(a[k] < a[k + 1]) {
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    for(int j = 0; j < i; j++) {
        printf("%d ", a[j]);
    }
}

void large(int i, int a[]) {
    int Large = 0;

    for(int j = 0; j < i; j++) {
        if (a[j] > Large)
            Large = a[j];
    }
    printf("Largest number is: %d\n", Large);
}
