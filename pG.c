#include<stdio.h>
int main()
{
    int e,m,b;
    int count =0;
    scanf("%d%d%d",&e,&m,&b);
    while(e){
    if(e>=1&&m>=1&&b>=1)
    {count++;
        e--;
        m--;
        b--;

    if (e>=2&&b>=1)
    {
        count++;
        e=e-2;
        b=b-1;

    }}

}
    printf("%d\n",count);
    return 0;
}
