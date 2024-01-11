#include<stdio.h>

void dollar(int dollar,int *twenty,int *ten,int *five,int *one)
{
    *twenty=dollar/20;
    dollar=dollar%20;
    *ten=dollar/10;
    dollar=dollar%10;
    *five=dollar/5;
    dollar=dollar%5;
    *one=dollar;
    printf("20$ bills: %d\n",*twenty);
    printf("10$ bills: %d\n",*ten);
    printf("5$ bills: %d\n",*five);
    printf("1$ bills: %d\n",*one);
}
int main()
{
int dollars;
int twenty=0,ten=0,five=0,one=0;
printf("Enter the amount in dollars: ");
scanf("%d",&dollars);

dollar(dollars,&twenty,&ten,&five,&one);




}