#include<stdio.h>
int main()
{
    int n;
    printf("Give the value of n: ");
    scanf("%d",&n);
    for(int row=n;row>0;row--)
    {
        for(int col=2*row;col>1;col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}