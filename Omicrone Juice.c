#include<stdio.h>
main()
{
    int T,A,B,C,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
      scanf("%d%d%d",&A,&B,&C);
      if (A==B&&B==C){printf("Peaceful");}
    else printf("Fight");
    }
    return 0;
}
