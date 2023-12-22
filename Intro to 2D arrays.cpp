#include<stdio.h>

int main()
{
	int i,j,a[3][3];
	
	for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
		printf("Enter element at position(%d,%d): ",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
}
 printf("Original Matrix\n");
	for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
	printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
printf("Transpose \n");
for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
	printf("%d\t",a[j][i]);	}
printf("\n");}
	
}
