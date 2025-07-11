#include<stdio.h>
void func(int y);
int main()
{
	int x=3;
	func(x);
	return 0;
}
void func(int y)
{
	if(y<0)
		return 0;
	printf("%d",y);
	func(y-1);
	printf("\n%d",y);
}
	
