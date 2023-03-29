#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    switch (n/10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        if((n/10.0)>=3.3)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
        break;
    case 2:
    case 1:
    case 0:
        printf("F");

        break;
    }
}