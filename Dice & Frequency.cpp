#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int freq[11] = {0};
    int sums[11] = {2,3,4,5,6,7,8,9,10,11,12};
    int d1, d2, sum;
    srand(time(NULL));
    for(int i = 0; i < 36000; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        sum = d1 + d2;
        for(int j = 0 ; j < 11 ; j++){
            if(sum == sums[j]){
                freq[j] = freq[j] + 1;
            }
        }
    }
   
    for(int i=0 ;i < 11; i++)
    printf("\nThe frequency of %d is %d",i+2,freq[i]);
    return 0;
}
