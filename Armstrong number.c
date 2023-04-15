#include<stdio.h>

int main()
{
    int n,a,sum=0,r;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r = a%10;
       sum=sum + r*r*r;
       a = a/10;
     }
    if(sum == n) printf("Armstrong number");
    else printf("Not an Armstrong number");
    return 0;
}
