#include<stdio.h>
int main()
{
 int n,k,a[30],count=0,i;
 scanf("%d%d",&n,&k);
 for(i=1;i<=n;i++)
 {
     scanf("%d",&a[i]);
     if (a[i]>k) count=count+1;
 }
 printf("%d",count);
}
