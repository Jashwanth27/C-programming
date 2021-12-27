#include<stdio.h>
main()
{
    int num,i,f=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f=i*f;
    }
    printf("\nFactorial is %d",f);
}