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


     for(i=0;i<=n;i++)
     {
          if(n>=0)
            {
             result=pow(a,i);
            printf("%d to the power %d is: %f\n",a,i,result);
            }
            else
                 result=1/(pow(a,i));
           printf("%d to the power -%d is: %f\n",a,i,result);
     }

}

