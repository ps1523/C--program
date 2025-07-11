#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the number start and end num");
	scanf("%d%d",&i,&j);
	printf("The even numbers are:");
	for(i=i;i<j;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		else
		{
			i=i+1;
			printf("%d\n",i);
		}
	}
		return 0;
}


