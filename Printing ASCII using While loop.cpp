#include <stdio.h>

int main(void) 

{
    int asc1,asc2;

    
    printf("Enter the starting ASCII value (0-255): ");
    scanf("%d", &asc1);
    
    printf("Enter the ending ASCII value (0-255): ");
    scanf("%d", &asc2);

    
    if (asc1 >= 0 && asc1<= 255 && asc2 >= 0 && asc2 <= 255) {
       
        

       
        while (asc1 <= asc2)
		 {
            printf("ASCII Value: %d, Character: %c\n", asc1, (char)asc1);
            asc1++;
        }
    } 
	else
	 {
        printf("Invalid ASCII values.\n");
    }

    return 0;
}

