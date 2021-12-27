#include<stdio.h>
main()
{
    int n,rem,count=0;
    printf("\nEnter number:");
    scanf("\n%d",&n);
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        if(rem>0)
        {
           count=count+1;
        }
    }
    printf("\nCount is %d",count);
}