#include<stdio.h>
main()
{
    int sum,n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\nSum is %d",sum);

}