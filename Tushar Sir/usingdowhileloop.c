//using do while loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Give the number to sum: ");
    scanf("%d",&n);
    int i=1;
    do{sum=sum+i;
        i++;}
        while(i<=n);
    printf("Sum is: %d\n",sum);
    return 0;    
        
}