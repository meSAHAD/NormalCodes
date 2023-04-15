#include<stdio.h>
int main()
{
    float a[3][3];
    float b[3][3];
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("a[%d] [%d]=",i,j);
            scanf("%f",&a[i][j]);
            printf("b[%d] [%d]=",i,j);
            scanf("%f",&b[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("%.0f + %.0f=%.0f\t\t",a[i][j],b[i][j],a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
