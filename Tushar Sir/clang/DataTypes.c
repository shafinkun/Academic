#include <stdio.h>
int main()
{
    float H, W;
    printf("Enter height : ");
    scanf("%f", &H);

    printf("Enter width : ");
    scanf("%f",&W);

    float P = 2 * (H + W);
    printf("perimeter is %.15f", P);
    printf(" \nHeight is %.15f\t Width is %.15f", H, W);
    return 0;
}