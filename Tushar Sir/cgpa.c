//let's make cgpa result
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<=100)
    {
    if(num>=80 && num<=100)
    {printf("A+");}
    else if(num>=75)
    {printf("A");}
    else if(num>=70)
    {printf("A-");}
    else if(num>=65)
    {printf("B+");}
    else if(num>=60)
    {printf("B");}
    else if(num>=55)
    {printf("B-");}
    else if(num>=50)
    {printf("C+");}
    else if(num>=45)
    {printf("C");}
    else if(num>=40)
    {printf("D");}
    else {printf("F");}
    }
    return 0;
}