#include<stdio.h>

int main()
{
    int i, j, a[3][3];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element at position(%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int sumR, sumC;

    for(i = 0; i < 3; i++) {
        sumR = 0;  
        for(j = 0; j < 3; j++) {
            sumR = sumR + a[i][j];
        }
        printf("Sum of row %d is: %d\n", i + 1, sumR);
    }

    for(j = 0; j < 3; j++) {
        sumC = 0; 
        for(i = 0; i < 3; i++) {
            sumC = sumC + a[i][j];
        }
        printf("Sum of column %d is: %d\n", j + 1, sumC);
    }

    return 0;
}

