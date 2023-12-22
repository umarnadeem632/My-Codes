#include <stdio.h>

int main(void)
     {
    int n, i = 2, fact = 1;
    printf("Enter your Number: ");
    scanf("%d", &n);

    while (i <= n)
	 {
       
        fact *= i;
     
        i++;
    }
    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}

