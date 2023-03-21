#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Give the value of n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(j=1;j<=2*(n-i);j++)
            printf("  ");
        for(j=i;j>= 1;j--)
            printf("%d ",j);
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(j=2*(n-i);j>=1;j--)
            printf("  ");
        for(j=i;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
}