#include<stdio.h>
main()
{
	int a;
	printf("\nEnter a number:");
	scanf("\n%d",&a);
	if(a>0)
	{
		printf("\nPositve");
	}
	else if(a<0)
	{
		printf("\nNegative");
	}
	else if(a==0)
	{
		printf("\nZero");
	}
}
