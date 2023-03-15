#include<stdio.h>
int main()
{
    int i=1,j=7;
    for( ;i<=9;i=i+2)
    {
        for(;j<=5;j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
}