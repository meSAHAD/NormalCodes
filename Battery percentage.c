#include<stdio.h>
main(){
    int i, j, T,X;
    scanf("%d",&T);  //Number of total outputs
    for(i=1;i<=T;i++)
    {
      scanf("%d",&X); //scaning battery percentage
        if(X<60){
            int count=0;
            for(j=X;j<60;j++)  count=count+1;
            for(j=60;j<80;j++) count=count+2;
            for(j=80;j<100;j++)count=count+3;
           printf("%d minutes\n",count);}
        else if(X<80&&X>59){
            int count=0;
            for(j=X;j<80;j++)  count=count+2;
            for(j=80;j<100;j++)count=count+3;
           printf("%d minutes\n",count);}
        else if(X<100&&X>79){
            int count=0;
            for(j=X;j<100;j++) count=count+3;
           printf("%d minutes\n",count);}
        else
            printf("0 minutes\n");
    }
}
