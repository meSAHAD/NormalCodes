#include<stdio.h>

void main()
{
    int i,j;
    int a[3][4];
    int b[3][4];
    int c[4][4];

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
            printf("\t",c[i][j]);

        }
        printf("\n");
    }
    }



