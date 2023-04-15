#include<stdio.h>

    int main() {
	long long int t,n,k,sum;
    scanf("%d",&t);

	for(int i=1;i<=t;i++)
	{
        scanf("%d%d",&n,&k);
	    sum=(k*(k+1)/2);
	    if(sum<=n)
	    {
	       printf("YES\n");
	    }
	    else
	    {
	         printf("NO\n");

	    }
	}
	return 0;
}
