#include<stdio.h>
int main()
{
    int n,flag;
    printf("Give n: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }

        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }

}   