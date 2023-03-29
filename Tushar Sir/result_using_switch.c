#include<stdio.h>
int main()
{
    int n;
    top:
    printf("Give integer number: ");
    scanf("%d",&n);
    if(n<=100 && n>=0){
    switch (n/10)
    {
        case 10:
        case 9:
        case 8:
        printf("Your grade: A+");
        break;
        case 7:
        printf("Your grade: A");
        break;
        case 6:
        printf("Your grade: A-");
        break;
        case 5:
        printf("Your grade: B");
        break;
        case 4:
        printf("Your grade: C");
        break;
        case 3:
            if((n/10.0)>=3.3)
            {printf("Your grade: D");}
            else
            {printf("Your grade: F");}
        break;
        default:
            printf("Your grade: F");
            break;
    }
    }
    else goto top;
}