#include<stdio.h>
int main()
{
	int num=1,factorial=1;
	printf("Enter the num:");
	scanf("%d",&num);
	while(num>0)
	{
		factorial=num*factorial;
		num--;
		printf("factorial is=%d",factorial);
	}
	return 0;
}
