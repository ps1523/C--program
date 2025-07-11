#include <stdio.h>
int main() {
    int arr,n;
    printf("Enter the number of element in the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements in array");
    for(int i=0;i<n;i++)
    {
	    scanf("%d",arr[i]);
    }
    int *ptr;
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf(" Element of arr[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}

