#include<stdio.h>
int main()
{
        int n;
        printf("Enter the counting of elements in array:");
        scanf("%d",&n);
        int arr[n];
        printf(" \n Enter the element in the array:");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("\n The element in the sum  array");
        for(int i=0;i<n;i++)
        { 
		arr[i]+=arr[i];
		arr[i]++;
                printf("\n%d",arr[i]);
        }
        return 0;
}

