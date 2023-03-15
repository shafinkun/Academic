#include<stdio.h>
int main()
{
    int n,n1,sum=0;
    printf("Give a number to check: ");
    scanf("%d",&n);
    for(int i=n;i!=0;i=(i/10))
    {
        n1=i%10;
        sum=sum*10+n1;
    }
    if(sum==n) printf("%d It's a palindrome!\n",sum);
    else printf("%d It's not a palindrome! \n",sum);
    return 0;
}