//pattern
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Give the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<2*i;j++)
            {
                printf("%d ",j);
            }
        for(k=j-2;k>=i;k--)
            {
                printf("%d ",k);
            }
        printf("\n");
    }
     return 0;       
    }