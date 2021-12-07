#include<stdio.h>
main()
{
	float basic,hra,pa,gross;
	printf("\nEnter basic salary:");
	scanf("\n%f",&basic);
	if(basic<=10000)
	{
		hra=(20*basic)/100;
		pa=(80*basic)/100;
		gross=basic+hra+pa;
		printf("\n%f",gross);
	}
	else if(basic<=20000)
	{
		hra=(25*basic)/100;
		pa=(90*basic)/100;
		gross=basic+hra+pa;
		printf("\n%f",gross);
		
	}
	else if(basic>20000)
	{
		hra=(30*basic)/100;
		pa=(95*basic)/100;
		gross=basic+hra+pa;
		printf("\n%f",gross);
	}
}