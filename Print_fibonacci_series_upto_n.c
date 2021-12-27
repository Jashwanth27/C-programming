//Print Fibonacci series upto n;
#include<stdio.h>
main()
{
    int a1=0,b1=1,c1,n1;
    printf("\nEnter n:");
    scanf("\n%d",&n1);
    printf("%d\t%d\t",a1,b1);
    c1=a1+b1;   
    while(c1<n1)
    {
        c1=a1+b1;
        printf("%d\t",c1);
        a1=b1;
        b1=c1;
    }
}