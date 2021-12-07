#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter a:");
	scanf("\n%d",&a);
	printf("\nEnter b:");
	scanf("\n%d",&b);
	if(a<b)
	{
		printf("\n%d is minimum",a);
	}
	else
	{
		printf("\n%d is minimum",b);
	}
}