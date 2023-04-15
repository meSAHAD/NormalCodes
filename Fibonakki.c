#include<stdio.h>

void main()
{
    int i,a,b,c;
    a=1;
    b=1; c=a+b;
     printf("1   1 ");
    for(i=3;i<=15;i++)
    {
        a=b;
        b=c;
        c=a+b;

        printf("%4d",c);

    }
}
