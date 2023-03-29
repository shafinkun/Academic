//grading using switch
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n;
    if(n<=100&&n>=0){
    switch(n/10)
    {
        case 10:
        case 9:
        case 8: printf("A+");
                break;
        case 7:
            if(m>=75) printf("A");
            else if(m>=70) printf("A-");
            break;
        case 6:
            if(m>=65) printf("B+");
            else if(m>=60) printf("B");
            break;
        case 5:
            if(m>=55) printf("B-");
            else if(m>=50) printf("C+");
            break;      
        case 4:
            if(m>=45) printf("C");
            else if(m>=40) printf("D");
            break;
        default:
            printf("F");          
    }
    }
    return 0;
}