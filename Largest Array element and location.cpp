#include<stdio.h>
int main()
{
	int num[10];
	int i,index=0;
	float avg;
	
	for(i=0;i<10;i++)
	{
	
	printf("Enter an array element: ");
	scanf("%d",&num[i]);
	
}
int large = num[0];
	for(i=0;i<10;i++)
	{
		if(large<num[i]){
			large = num[i];
			index = i+1;
		}
		
	}
printf("Largest number is %d and its location is %d\n",large,index);
}
