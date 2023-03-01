//using do while loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give number to sum even: ");
    scanf("%d",&n);
    int i=2;
    do{sum=sum+i;
        i=i+2;}while(i<=n);
        printf("Sum is: %d",sum);
    return 0;    
}