#include<stdio.h>
int main()
{
    int n, i;
	 printf("enter the size of array : ");
	 scanf("%d",&n);
	 int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("enter the value %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("reverse order is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}