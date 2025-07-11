#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter the n1 and n2:\n");
	scanf("%d%d",&n1,&n2);
	while(n1<n2)
	{
		while(n1%2==0)
		{
			n1=n1+1;
		}
	    printf("%d\n",n1);
	    n1=n1+2;
	 }
	    return 0;
}


