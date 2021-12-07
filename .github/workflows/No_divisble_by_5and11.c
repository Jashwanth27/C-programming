#include<stdio.h>
main()
{
	int a;
	printf("\nENter a:");
	scanf("\n%d",&a);
	if(a%5==0&&a%11==0)
	{
		printf("\nIt is divisble by 5 and 11");
	}
	else
	{
		printf("\nIt is not divisible by 5 and 11");
	}
}