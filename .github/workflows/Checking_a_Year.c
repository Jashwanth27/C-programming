#include<stdio.h>
main()
{
	int days;
	printf("\nEnter days:");
	scanf("\n%d",&days);
	if(days==365)
	{
		printf("\nNormal Year");
	}
	if(days==366)
	{
		printf("\nLeap Year");
	}
	if(days!=366&&days!=365)
	{
		printf("\nInvalid");
	}
}