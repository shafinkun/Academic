#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Give something to check: ");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    if(count>1)
    {
        int n=count/2;
        for(int j=0;j<n;j++)
            {
                if(str[j]!=str[count-(j+1)])
                    {printf("It's not a palindrome!\n");
                    return 0;}
            }
            printf("It's a palindrome!!!\n");
    }
    return 0;
}