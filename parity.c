#include<stdio.h>
int main()
{
    int T,n,c=0,i,a,b;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        n=a+b;
    for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("Alice\n");
  }
  else {
         printf("Bob\n");
  }
}
return 0;
}
