#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the 5 nuumbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("a is larger");
				}
				else{
					printf("e is larger");
				}
			}
			else{
				if(d>e)
				{
					printf("d is larger");
				}
				else
				{
					printf("e is larger");
				}
			}
		}
		else{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is larger");
				}
				else
				{
					printf("e is larger");
				}
			}
			else
			{
				if(d>e)
                                {
                                        printf("d is larger");
                                }
                                else
                                {
                                        printf("e is larger");
                                }
			}
		}
		}
		else
		{
			 if(b>c){
                        if(b>d){
                                if(b>e){
                                        printf("b is larger");
                                }
                                else{
                                        printf("e is larger");
                                }
                        }
                        else{
                                if(d>e)
                                {
                                        printf("d is larger");
                                }
                                else
                                {
                                        printf("e is larger");
                                }
                        }
                }
                else{
                        if(c>d)
                        {
                                if(c>e)
                                {
                                        printf("c is larger");
                                }
                                else
                                {
                                        printf("e is larger");
                                }
                        }
                        else
                        {
                                if(d>e)
                                {
                                        printf("d is larger");
                                }
                                else
                                {
                                        printf("e is larger");
                                }
                        }
		}
		}
		return 0;
 	}
		





