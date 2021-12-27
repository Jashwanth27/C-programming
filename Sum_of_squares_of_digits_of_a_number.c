#include<stdio.h>
main()
{
    int n,sum=0,rem;
    printf("\nEnter n:");
    scanf("%d",&n);
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem*rem;
    }
    printf("\nSum is %d",sum);
}