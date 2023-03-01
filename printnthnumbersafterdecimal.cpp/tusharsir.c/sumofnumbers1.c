//Using for loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give the nth number to sum: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            sum=sum+i;
    }
    printf("Sum is = %d",sum);
    return 0;
}