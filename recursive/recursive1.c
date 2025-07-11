#include<stdio.h>
int factorial(int n);
int main ()
{
	int a,result;
	printf("Enter the number to find the factorial:");
	scanf("%d",&a);
	result=factorial(a);
	printf("Factorial for %d is %d",a,result);
	return 0;
}
int factorial(int n)
{
	if (n == 0)
       	{ 
		return 1;
       	}
       	else
       	{
	       	return n * factorial(n - 1); 

	}


}
		
