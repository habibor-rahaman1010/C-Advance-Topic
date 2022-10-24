//use self function in c program...self header file use here..
#include <stdio.h>
#include "selfMath.h"

int main() {
    int number[7] = {34, 54, 65, 32, 56, 76, 40};
    printf("Max value is: %d \n", getMax(number, 7));
    printf("Min value is: %d \n", getMin(number, 7));

    printf("Sum is: %d \n", sum(23, 30));
    printf("Sub is: %d \n", sub(30, 15));
    printf("Mul is: %d \n", mul(4, 12));
    printf("Div is: %d \n", div(20, 2));

return 0;
}
