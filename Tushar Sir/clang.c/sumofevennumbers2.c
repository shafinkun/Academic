//using while loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give the number to sum even numbers: ");
    scanf("%d",&n);
    int i=2;
    while(i<=n)
        {
            sum=sum+i;
            i=i+2;
        }
    printf("Sum of even numbers: %d",sum);
    return 0;    
}