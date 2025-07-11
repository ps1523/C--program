#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=(int *)malloc(10);
	*ptr=a;
	printf("%d",*ptr);
	return 0;
}
