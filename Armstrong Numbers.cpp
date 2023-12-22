#include<stdio.h>
#include<math.h>

int main(void)
{
	int num,n1,n2,n3,n4,sum;
	num=1000;
	printf("All  4 digits armstrong numbers are :");
	while(num>=1000&&num<=9999)
	{
	
	n1=num/1000;
	n2=(num/100)%10;
	n3=(num/10)%10;
	n4=num%10;
	sum= pow(n1, 4) + pow(n2, 4) + pow(n3, 4) + pow(n4, 4);
    
	
	
	if(sum==num)
	{
	printf("%d\n", num);
	}
	 
	num++;	
    }

	return 0;
}
