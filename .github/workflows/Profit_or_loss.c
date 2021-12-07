#include<stdio.h>
main()
{
	int sp,cp,dif;
	printf("\nEnter CP");
	scanf("\n%d",&cp);
	printf("\nEnter SP");
	scanf("\n%d",&sp);
	dif=sp-cp;
	if(dif>0)
	{
		printf("\nit is profit");
	}
	if(dif<0)
	{
		printf("\nIt is loss");
	}
}