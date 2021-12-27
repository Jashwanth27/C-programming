#include<stdio.h>
main()
{
    int n,i,c=0;
    printf("\nEnter number:");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
        if(c==2)
        printf("Prime");
        else
        printf("\nNot a Prime");
}