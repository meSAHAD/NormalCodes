#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum=((b/2)*(b+1)-((a)/2)*(a+1))+((d/2)*(d+1)-((c)/2)*(c+1));
    printf("%d",sum);
    return 0;
}
