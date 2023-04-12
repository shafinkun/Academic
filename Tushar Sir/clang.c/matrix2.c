//Let's do matrix multiplication
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    printf("Enter first matrix A(2x2)");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {   
            c[i][j]=0;
            for(k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[i][k];
            }
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}