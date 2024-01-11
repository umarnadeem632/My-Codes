#include<stdio.h>

int main() {
    char arr[100];
    int i = 0;
    char c;

    printf("Enter a string: ");

    for (i = 0; i<100; i++) {scanf("%c", &c);
        arr[i] = c;
    }

    arr[i] = '\0';

    printf("The reverse of the string is: ");
    
    for (i = i - 1; i >= 0; i--) {
        printf("%c", arr[i]);  
    }

    return 0;
}
