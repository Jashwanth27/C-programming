#include<stdio.h>
main()
{
	char x;
	printf("\nEnter char");
	scanf("\n%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("\nIt is a vowel");
	}
	else
	{
		printf("\nNot a Vowel");
	}
}