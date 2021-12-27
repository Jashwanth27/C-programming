#include<stdio.h>
main()
{
    int n,product,rem;
    product=1;
    printf("\nEnter number:");
    scanf("\n%d",&n);
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        if(rem%2!=0)
        {
            product=product*rem;
        }
    }
    printf("\nProduct is %d",product);
}