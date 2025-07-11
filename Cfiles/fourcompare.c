#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the four numbers:");
	scanf("\t%d\t%d\t%d\t%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("\n A is larger");
			}
			else
			{
				printf("\n D is larger");
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n  C  is larger");
			}
			else
			{
				printf("\n D is larger");
			}
		}

	}
	else
	{
		 if(b>c)
                {
                        if(b>d)
                        {
                                printf("\n B is larger");
                        }
                        else
                        {
                                printf("\n D is larger");
                        }
                }
                else
                {
                        if(c>d)
                        {
                                printf("\n  C  is larger");
                        }
                        else
                        {
                                printf("\n D is larger");
                        }

                }
	}
	return 0;

}




