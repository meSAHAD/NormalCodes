#include<stdio.h>
main()
{
    int steps=0,distance;
    scanf("%d",&distance);
    if(distance%5==0){printf("%d",distance/5);}
    else printf("%d",(distance/5)+1);
}
