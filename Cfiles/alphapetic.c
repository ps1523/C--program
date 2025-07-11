#include<stdio.h>
char main()
{
	char ch,n;
	ch='A';
	printf("print alphabetic for the end of:");
	scanf("\t%c",&n);
	while(ch<=n)
	{
		printf("\n%c",ch);
		ch++;
	}
	return 0;
}
