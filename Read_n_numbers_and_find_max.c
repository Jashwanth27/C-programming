//Read n numbers and finding max among them
#include <stdio.h>

main() 
{
    int i,max,n,num;
	printf("Enter n:");
	scanf("%d",&n);
	max=0;
	for(i=1;i<=n;i++)
	{
		printf("Enter num");
		scanf("%d",&num);

		if(max<num)
        {
            max = num;
        }
		
	}
	printf("\nmax=%d",max);
}