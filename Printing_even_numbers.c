#include<stdio.h>
main()
{
    int n,i,j;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter numbers:");
    for(j=i;j<=n;j++)
    {
        scanf("%d",&j);
        printf("%d",j);
        if(j%2==0)
        {
            printf("%d",j);
        }
    }
}