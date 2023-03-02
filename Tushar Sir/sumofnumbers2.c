//using while loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give the nth number to sum: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum is: %d",sum);
    return 0;
}