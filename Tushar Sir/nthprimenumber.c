#include <stdio.h>
int main()
{
    int number=1,n;
    printf("Give the value of n: ");
    scanf("%d",&n);
    while(n>0){
        number++;
        int flag=0;
        for(int i=2;i<number;i++)
        {
            if(number%i==0){ 
                flag=1;
                break;
            }
        }
        if(flag==0){printf("%d ",number);
        n--;}

    }
    return 0;
}
