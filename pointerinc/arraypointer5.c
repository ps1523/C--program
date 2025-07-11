#include<stdio.h>
void greet()
{
	printf("Hello world!");
}
int main()
{
	void(*func_ptr)();
	func_ptr=greet;
	func_ptr();
	return 0;
}

