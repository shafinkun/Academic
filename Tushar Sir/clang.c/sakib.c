#include<stdio.h>
int main()
{
    int m,n,p,q,i,j;
    scanf("%d %d %d %d",&m,&n,&p,&q);
   int a[m][n],b[p][q];
   if(n==p)
   {
    int c[m][q];
        //taking inputs
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        //
   }
   else
   {
        printf("matrix multiplication is not possible and exit.\n");
   }

   return 0;
    
}