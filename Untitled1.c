#include<stdio.h>
 int main()
{
    char name;

    printf("What is the name?");
    name=getchar();
    printf("Hello %c!!!",&name);

    return 0;
}
