#include<stdio.h>
int main()
{
    int n=100,sum=0,i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum= %d",sum);
}