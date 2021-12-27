#include<stdio.h>
main()
{
    char ch,cha;
     printf("Lower case alphabets:");
    for(ch='a';ch<='z';ch++)
    {
        printf("%2c",ch);
    }
    printf("\nUpper case alphabets:");
    for(cha='A';cha<='Z';cha++)
    {
        printf("%2c",cha);
    }

}