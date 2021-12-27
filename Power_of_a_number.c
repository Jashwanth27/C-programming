#include<stdio.h>
#include<math.h>
main()
{
    int x,y,p;
    printf("\nEnter x:");
    scanf("%d",&x);
    printf("\nEnter y:");
    scanf("%d",&y);
    p=pow(x,y);
    printf("\n%d^%d is %d",x,y,p);

}