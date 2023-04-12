//let's sum up two matrics
#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Give the order r and c for the matrices: ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],C[r][c];
    for(i=0;i<r;i++){
        for( j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
    }
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            scanf("%d",&b[i][j]);}
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            C[i][j]=a[i][j]+b[i][j];
            printf("%d\t",C[i][j]);}
            printf("\n");
    }
}