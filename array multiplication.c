#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int a[3][3], b[3][3], c[3][3];

    for(i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%d", &b[i][j]);

    for(i = 0; i < n; i++)
        {
        int sum = 0;o
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++) sum += a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    }
    printf("\n\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++) printf("%d\t", c[i][j]);
        printf("\n");
    }
}

