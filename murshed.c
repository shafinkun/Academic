#include <stdio.h>

int main() {
    int counter;
    printf("Odd numbers between 1 to 100\n");
    counter = 1;
   while(counter <= 100){
        if(counter%2 == 1) {
             printf("%d ", counter);
        }
        counter++;
    }

    return 0;
}
