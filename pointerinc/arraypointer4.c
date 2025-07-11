#include<stdio.h>
int main()
{
	int a[2][3]={{10,20,30},{40,50,60}};
	printf("\n%d",*(a+0));
	printf("\n%d",*(a+1));
	printf("\n%d",*(a+3));
	printf("\n%d",*(*(a+0)+0));
	printf("\n%d",*(*(a+1)+0));
	return 0;
}

