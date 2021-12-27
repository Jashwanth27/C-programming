#include<stdio.h>
main()
{
    int n,p,rem;
    printf("\nEnter number:");
    scanf("%d",&n);
    p=1;
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        p=p*rem;
    }
    printf("\nProduct is %d",p);
}