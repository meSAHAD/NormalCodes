#include<stdio.h>
main()
{
    int i, j, T, n,X;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&X);
        printf("%d%%\n",X);
        if(X<60)
        {
            int count=0;
            for(j=X;j<60;j++)
            {
                count=count+1;
            }
            for(j=60;j<80;j++)
            {
                count=count+2;
            }
            for(j=80;j<100;j++)
            {
                count=count+3;
            }
            printf("%d minutes\n",count);
        }
        else if(X<80&&X>59)
        {
            int sum=0;
            for(j=X;j<80;j++)
            {
                sum=sum+2;
            }
            for(j=80;j<100;j++)
            {
                sum=sum+3;
            }
            printf("%d minutes\n",sum);
        }
        else if(X<100&&X>79)
        {
            int s=0;
            for(j=X;j<100;j++)
            {
                s=s+3;
            }
            printf("%d minutes\n",s);
        }
        else
            printf("0 minutes\n");
    }
}
