#include <stdio.h>
int main()
{
    int m, n, i, j, A[10][10], B[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", & m, & n);

  //scaning A matrix

    printf("Enter the elements of A matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) scanf("%d", & A[i][j]);

  // scaning B matrix

    printf("Enter the elements of B matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) scanf("%d", & B[i][j]);

   //addition of two matrix

    printf("Sum of entered matrices:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

