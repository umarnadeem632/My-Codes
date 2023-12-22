#include <stdio.h>

int main() {
    int num,count=1;
    float small= 12123131241442,sum=0,value;

    printf("Enter the number of values ");
    scanf("%d", &num);

    if (num <= 0) 
	{
        printf("Invalid input. Please enter a positive number of values.\n");
        
    }
    

    while (count <= num) {
        
        printf("Enter value %d: ", count);
 
        
        scanf("%f", &value);
        sum += value;

        if (value < small)	small = value;
        
        count++;
    }

    printf("Sum of entered values: %.3f\n", sum);
    printf("Smallest value: %.3f\n", small);

	
    return 0;
}

