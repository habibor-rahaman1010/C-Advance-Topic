//memory address print out of an array in c program...

#include <stdio.h>

int main() {
    int number[5] = {23, 43, 56, 65, 76};
    printf("value of array: %d, %d, %d, %d, %d \n", number[0], number[1], number[2], number[3], number[4]);

    printf("address of array is: %p \n", number);
    printf("address of array is: %p \n", &number[0]);
    printf("address of array is: %p \n", &number[1]);
    printf("address of array is: %p \n", &number[2]);
    printf("address of array is: %p \n", &number[3]);
    printf("address of array is: %p \n", &number[4]);

return 0;
}
