#include<stdio.h>
int main(){

int n,row,col;
printf("Enter a number: ");
scanf("%d",&n);
    for(row=n;row>0;row--)
    {
        for(col=(row*2);col>1;col--)
        {printf("*");}
        printf("\n");
    }
return 0;
}
