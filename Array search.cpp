#include<stdio.h>

int main()

{
	int a[5];
	int i,check;
	

	for(i=0;i<5;i++)
	{
	printf("Input element %d\n",i+1);
	scanf("%d",&a[i]);	
	}
	printf("Enter the number you want to search for : \n");
	scanf("%d",&check);
	
	for(i=0;i<5;i++)
	{
		
	if(check==a[i])
	{
		printf("Number is present in array");
         return 0;	}
}

	printf("Your number is not present in array");
	return 0;
}
