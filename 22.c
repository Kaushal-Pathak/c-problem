#include <stdio.h>
int main()
{
    int i, size;
    printf("enter number of elements of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Odd number of array are\n");
    for (i = 0; i < size; i++){
        if(arr[i]%2!=0){
            printf("%d \t",arr[i]);
        }
    }
return 0;
}
