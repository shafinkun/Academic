#include<stdio.h>
int main()
{
    char n;

    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowel\n");
    }
    else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        printf("Vowel\n");
    }
    else if(n>='a'&&n<='z')
    {
        printf("Consonant\n");
    }
    else if(n>='A'&&n<='Z')
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Invalid!!!\n");
    }
    return 0;
}
