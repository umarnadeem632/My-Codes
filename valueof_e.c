#include<stdio.h>

int main()
{
    int n;
    double e=1.0f;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
double fact=1;
    for(int i=1;i<=n;i++)
    {

fact=fact*i;

e+=1.0f/fact ;}
printf("The value of e is %lf",e);
}