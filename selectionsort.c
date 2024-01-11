#include<stdio.h>

void sort(int n,int a[n] );

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array:");
    for(int j=0;j<n;j++)
   {scanf("%d",&a[j]);}

    sort(n,a);

    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

void sort(int n,int a[])
{
    if (n <= 0)
        return;
    int large=0;
for(int j=0;j<n;j++){
if(a[j]>a[large])
{large=j;}}

int temp=a[large];
a[large]=a[n-1];
a[n-1]=temp;

sort(n-1,a);
}