#include<stdio.h>
#include<math.h>

void main()
{
    int a,i,j,n;
    float result;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the value till you wanna see the answer: ");
    scanf("%d",&n);
    if(n>=0)
    {
     for(i=0;i<=n;i++)
     {
        result=pow(a,i);
        printf("%d to the power %d is: %f\n",a,i,result);
     }
    }
    else if(n<0)
        {
        for(j=0;j<=-n;j++)
         {
           result=1/(pow(a,j));
           printf("%d to the power -%d is: %f\n",a,j,result);

          }
        }

}

