#include<stdio.h>

int main(void)
{
    int i, j,k, a[3][3],b[3][3], product[3][3] = {0};

    printf("1st matrix\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element at position(%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("2nd matrix\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter element at position(%d, %d): ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The 1st matrix is :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("The 2nd matrix is :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                product[i][j] += a[i][k]*b[k][j];
                }
            }
    }
   
   printf("The product of 2 matrices is :\n");
   for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
    	printf("%d\t",product[i][j]);
        }
    printf("\n");
    }
}
