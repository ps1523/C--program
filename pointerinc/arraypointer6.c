#include<stdio.h>
int main(int argc,char*argv[])
{ 
	if(argv<3)
	{
		printf("usage is:filenmae arg1,arg2,etc...\n");
		return 0;
	}
	for(int i=0;i<argc;i++)
		printf("%s",argv[i]);
	if(strcmp(argv[0],".\a.out"))
	{
		printf("Hello");
	}
	else
	{
		printf("Welcome");
	}
	printf("/n");
}

