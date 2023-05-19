//using for loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give number to sum evens: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of even numbers: %d\n",sum);
    return 0;
}