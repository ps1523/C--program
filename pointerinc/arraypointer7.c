#include<stdio.h>
int main()
{
	int place=1,rem,num,result=0;
	printf("Enter Binary Number:");
	scanf("%d",&num);
	while(num)
	{
		rem=num%10;
		result=result+rem*place;
		place=place*2;
		num=num/10;
	}
	printf("The decimal is:%d",result);
}
