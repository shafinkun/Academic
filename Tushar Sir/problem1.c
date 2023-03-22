#include<stdio.h>
int main()
{
    int i1,i2,a,b,c,d;
    float f1,f2,avr;
    printf("Give two integers: ");
    scanf("%d %d",&i1,&i2);
    printf("Give two float: ");
    scanf("%f %f",&f1,&f2);
    avr=(f1+f2)/2;
    a=i1|i2;
    b=i1&i2;
    c=i1<<2;
    d=i2>>1;
    printf("Average of %f and %f is: %.4f\n",f1,f2,avr);
    printf("Bitwise-OR is: %d\n",a);
    printf("Bitwise-AND is: %d\n",b);
    printf("%d shifted left by two places: %d\n",i1,c);
    printf("%d shifted right by one place: %d\n",i2,d);
    
    return 0;  
}