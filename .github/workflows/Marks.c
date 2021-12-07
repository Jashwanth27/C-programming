#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,sum,avg;
	printf("\nEnter m1:");
	scanf("\n%d",&m1);
	printf("\nEnter m2:");
	scanf("\n%d",&m2);
	printf("\nEnter m3:");
	scanf("\n%d",&m3);
	printf("\nEnter m4:");
	scanf("\n%d",&m4);
	printf("\nEnter m5:");
	scanf("\n%d",&m5);
	sum=m1+m2+m3+m4+m5;
	printf("\n%d",sum);
	avg=sum/5;
	printf("\n%d",avg);
	if(avg>=90)
	{
		printf("\nYour grade is A");
	}
	else if(avg>80&&avg<90)
	{
		printf("\nYour grade is B");
	}
		else if(avg>70&&avg<80)
	{
		printf("\nYour grade is C");
	}
		else if(avg>40&&avg<70)
	{
		printf("\nYour grade is D");
	}
		else if(avg<40)
	{
		printf("\nYour grade is E");
	}
	
	
}