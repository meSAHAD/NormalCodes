#include<stdio.h>
int main()
{
    int X,Y,N,i;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        scanf("%d%d",&X,&Y);
        if (X<Y) {printf("FIRST\n");}
        else if (X==Y) {printf("ANY\n");}
        else  {printf("SECOND\n");}
    }
    return 0;
}
