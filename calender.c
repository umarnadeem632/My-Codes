#include<stdio.h>

int main()
{
    int days,week_d;
    printf("Number of days in month: ");
    scanf("%d",&days);
    printf("Starting day of the week(Sun=1...Sat=7): ");
    scanf("%d",&week_d);
    printf("Sun\tMon\tTue\tWed\tThurs\tFri\tSat\n");
   switch(week_d)
    {
    case 1:
    printf("");
    break;
    case 2:
    printf("\t");
    break;
    case 3:
    printf("\t\t");
    break;
    case 4:
    printf("\t\t\t");
    break;
    case 5:
    printf("\t\t\t\t");
    break;
    case 6:
    printf("\t\t\t\t\t");
    break;
    case 7:
    printf("\t\t\t\t\t\t");
    break;
    default:
    printf("Bruh! There are only 7 days in a week");
    break;
    }
    
    for(int i=1;i<=days;i++)
    {
        printf("%d\t",i);
        if((week_d + i -1)%7==0) 
        {
            printf("\n");
        }
    }

    
    
    }