#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is smaller");
		}
		else
		{
			printf("c is smaller");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is smaller");
		}
		else
		{
			printf("cis smaller");
		}
	}
}


