 #include<stdio.h>
 int main()
 {
 	
 int i,j,k,n;
 printf("Enter value of n: ");
 scanf("%d",&n);
 
 for (i=0 ;i<n ;i++)
     {
    for(k=1;k+i<=n;k++)
      {printf(" ");}

     for(j=0;j<=i;j++)
     printf("* ");
    

     printf("\n");} 

  

      for(i=n-1;i!=0;i--) 
	   {

       for(k=0;k+i<=n;k++)  
       {printf(" ");}
       for(j=1;j<=i;j++)
       {printf("* ");}

       printf("\n");
       } 
       return 0;
}
