// metrix addition
#include <stdio.h>
int main()
{
    int m, n;
    printf("\tNote: To sum Two matrices, both need to meet with the diamentions\n");
    printf("Give row and column respectively: ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}