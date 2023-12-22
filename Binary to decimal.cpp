#include <stdio.h>
#include <math.h>

int main()
{
    int length = 0,result = 0;
    int number;
    int lastDigit;
    printf("Enter a binary number: "); 
    scanf("%d",&number);
    int copy = number;
    while(copy >=1){
        copy /=10;
        length++;
    }
    int i = 0;
    while(i<length){
        lastDigit = number % 10;
        number /=10;
        result += lastDigit*pow(2,i);
        i++;
    }
    printf("%d",result);
    return 0;
}
