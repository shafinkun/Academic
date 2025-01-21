#include<stdio.h>
int main()
{
    int n=10,sum=0,i=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);

    printf("Sum= %d",sum);
}