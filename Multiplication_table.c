#include<stdio.h>
main()
{
    int n,p,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        p=n*i;
        printf("\n%dx%d=%d",n,i,p);
    }
}