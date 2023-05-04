#include<stdio.h>
int main(){
	int len  =0;
	int arr[] = {2,4,6,8,9,4};
	printf("Size of Array is :%d \n",sizeof(arr));
	printf("Size of one value is :%d \n",sizeof(int));
	len  = sizeof(arr)/sizeof(int);
	printf("Length of Array is:%d",len);
	return 0;
}
