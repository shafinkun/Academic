#include<stdio.h>
int main()
{
    int n;
    printf("Give the value of n: ");
    scanf("%d",&n);
    int m=0; 
    while(n>0)
    {
            m=m+n%10;
            n=n/10;
    }
    printf("The value of sum is: %d",m);
    return 0;
}