#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("%d",*ptr);
	printf("\n%p",&a);
	printf("\n%p",ptr);
	printf("\nAddresss of a %p",(void*)&a);
        return 0;
} 
