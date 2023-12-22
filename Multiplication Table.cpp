#include <stdio.h>

int main(void)
{
    int n,multiplier;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    for( multiplier = 1; multiplier <= 10; multiplier++)
	{
    for(int i=1 ; i<= n; i++)
	{
        printf("Table %d:%2dx%2d=%2d  ",i,i,multiplier,i*multiplier);
    }
    printf("\n");
    }
    return 0;
}
