#include<stdio.h>
int main()
{
	int a,b,sum;
	int *ptr;
	ptr=&sum;
	printf("Enter the a= \n b=:");
	scanf("%d%d",&a,&b);
	sum=a*b;
	printf("%d",*ptr);
	printf("%p",&sum);
	return 0;
}

