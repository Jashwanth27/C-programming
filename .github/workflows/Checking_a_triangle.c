#include<stdio.h>
main()
{
	int a,b,c,sum;
	printf("\nEnter a:");
	scanf("\n%d",&a);
	printf("\nEnter b:");
	scanf("\n%d",&b);
	printf("\nEnter c:");
	scanf("\n%d",&c);
	sum=a+b+c;
	if(sum>180)
	{
		printf("\nNot a triangle");
	}
	else
	{
		printf("\nIt is a triangle");
	}
	
}