#include <stdio.h>
int main()
{
     int i,j,k,n=10;

    printf("Enter n: ");
     scanf("%d",&n);
    printf("Pattern 1\n");
     for(i=0;  i<=n ; i++)
     
     { for (j=0; j<i; j++)

      {printf("*");}

     printf("\n");}
    

     printf("\nPattern 2 \n");
     
     for(i =n;  i!=0 ; i--)
     
     { for (j=1; j<=i; j++)

      {printf("*");}

    

     printf("\n");}

      printf("\nPattern 3 \n");
     

     for (i=0 ;i<n ;i++)
     {
    for(k=1;k+i<=n;k++)
      {printf(" ");}

     for(j=0;j<=i;j++)
     printf("*");
    

     printf("\n");} 

       printf("\nPattern 4\n");

       for(i=n;i!=0;i--)  {

       for(k=0;k+i<=n;k++)  
       {printf(" ");}
       for(j=1;j<=i;j++)      
       {printf("*");}

       printf("\n");
       } 
       return 0;
}
