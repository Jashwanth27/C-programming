#include<stdio.h>
int check(x)
{
    if(x%4==0)
    {
        printf("Leap year");
    }
    else if(x%4!=0)
    {
        printf("Not a Leap year");
    }
}
main()
{
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    check(n);
}