#include<stdio.h>
int main()
{
	int num1, num2;
	printf("enter the two number:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d maximum",num1);
	}
	if(num2>num1)
	{
		printf("%d maximum",num2);
	}
	if(num1==num2)
	{
		printf("both are same");
	}
	return 0;
}
