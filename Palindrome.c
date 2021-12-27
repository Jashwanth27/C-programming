#include<stdio.h>
main()
{
    int p,n,rem,rev;
    rev=0;
  
    printf("\nEnter number:");
    scanf("%d",&n);
      p=n;
    for(;n!=0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;

    }
    printf("\nReverse is %d",rev);
    
if(rev==p)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot a palindrome");

    }
}