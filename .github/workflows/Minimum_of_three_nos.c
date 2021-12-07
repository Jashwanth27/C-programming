#include<stdio.h>
main()
{
	int a,b,c;
	/*printf("\nEnter a:");
	scanf("\n%d",&a);
	printf("\nEnter b:");
	scanf("\n%d",&b);
	printf("\nEnter c:");
	scanf("\n%d",&c);*/
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		printf("a is min");
	}
	else if(b<c)
	{
		printf("b is min");
	}
    else if(c<a)
	{
		printf("c is min");
	}
}
