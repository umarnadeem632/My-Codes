#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b;

    printf("Input a number in decimal: \n");
    scanf("%d", &a);
    b = a;

    // Initialize strings to store binary and octal representations
    char binary[32] = "";  
    char octal[12] = "";   



    while (b != 0)
    {
        int bin = b % 2;
        char binChar[2];
        sprintf(binChar, "%d", bin);
        strcat(binary, binChar);
        b = b / 2;
    }




    while (a != 0)
    {
        int oct = a % 8;
        char octChar[2];
        sprintf(octChar, "%d", oct);
        strcat(octal, octChar);
        a = a / 8;
    }

    // Reverse the binary and octal strings
    strrev(binary); 
    strrev(octal);

    printf("\nBinary: %s\n", binary);
    printf("Octal: %s\n", octal);

   

    return 0;
}

